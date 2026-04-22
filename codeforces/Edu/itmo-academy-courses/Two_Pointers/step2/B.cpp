#include <bits/stdc++.h>
using namespace std;
long long n ,s;
vector<long long> a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;

    for(long long i = 0; i<n; i++)
    {
        long long inp;
        cin >> inp;
        a.push_back(inp);
    }

    long long l = 0;
    long long sum = 0;
    long long result =LONG_LONG_MAX;
    for(long long r=0; r<n;r++)
    {
        sum += a[r];

        while(sum-a[l] >= s)
        {
            sum-=a[l];
            l++;
        }
        if(sum>=s) result = min(result , r-l+1);
    }

    if(result >n) cout << -1;
    else cout << result;


}