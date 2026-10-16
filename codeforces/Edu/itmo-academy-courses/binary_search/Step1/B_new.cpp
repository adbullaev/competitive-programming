#include <bits/stdc++.h>
using namespace std;

long long find_lower(vector<long long> &arr , long long x)
{
    long long l,r,m;
    l = -1;
    r = arr.size();

    while(r>l+1)
    {
        m = (l+r)/2;
        if(arr[m] <= x)
        {
            l = m;
        } else {
            r = m;
        } 
    }

    return l;
}

int main()
{

    long long n,k;
    cin >> n >> k;
    vector<long long> vec(n);
    for(long long i =0 ;i<n;i++) cin >> vec[i];

    while(k--)
    {
        long long x;
        cin >> x;
        long long ans = find_lower(vec,x);

        cout << (ans == -1 ? 0 : ans+1) << "\n";
    }
    
}