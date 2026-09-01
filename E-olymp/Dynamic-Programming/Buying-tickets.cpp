#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e4;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long> a,b,c;
    a.push_back(INF);
    b.push_back(INF);
    c.push_back(INF);

    for(long long i = 0;i<n;i++)
    {
        long long ai,bi,ci;
        cin >> ai >> bi >> ci;
        if(i == n-1)
        {
            a.push_back(ai);
            b.push_back(INF);
            c.push_back(INF);
        }
        else if(i == n-2)
        {
            a.push_back(ai);
            b.push_back(bi);
            c.push_back(INF);
        }
        else 
        {
            a.push_back(ai);
            b.push_back(bi);
            c.push_back(ci); 
        }
    }

    vector<long long> dp(n+1,0);
    dp[0] = 0;
    for(long long i = 1;i<=n;i++)
    {
        if(i == 1)
        {
            dp[i] = dp[i-1]+a[i];
        }
        else if(i == 2)
        {
            dp[i] = min(dp[i-2]+b[i-1],dp[i-1]+a[i]);
        }
        else
        {
            dp[i] = min(dp[i-1]+a[i],min(dp[i-2]+b[i-1], dp[i-3]+c[i-2]));
        }
    }

    cout << dp[n] << "\n";
}