#include <bits/stdc++.h>
using namespace std;
long long k;
long long check(vector<long long> & vec, long long c)
{
    long long local_sum = 0;
    for(long long i = 0;i<vec.size();i++)
    {
        local_sum += min(vec[i],c);
    }
    return local_sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;
    long long n;
    cin >> n;
    vector<long long> a;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a.push_back(inp);
    }

    long long r ,l;
    l = 0;
    r = 1e11;
    long long ans = 0;
    while(l<=r)
    {
        long long m = l+ (r-l)/2;

        if(check(a,m) >= k*m)
        {   
            ans = m;
            l = m+1;
        }
        else r = m-1;
    }

    cout << ans << "\n";
    
}