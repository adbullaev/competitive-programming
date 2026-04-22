#include <bits/stdc++.h>
using namespace std;

long long t;
long long n;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--)
    {
    
    cin >> n;
    vector<long long> a(n,0);
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i] = inp;
    }

    vector<vector<long long>> dp(2,vector<long long>(n+2,-1e18));
    dp[0][0]=0;
    dp[1][0]=0;
    long long maxn = -1e18;

    for(long long i = 0;i<n;i++)
    {
        dp[i%2].assign(n+1,-1e18);
        for(long long j = 1;j<=n;j++)
        {
            
            dp[i%2][j] = max(dp[(i+1)%2][j-1]+a[i],dp[(i+1)%2][j-2]);
        }

        maxn = max(maxn,dp[i%2][n]);

    }

    cout << maxn << "\n";
    dp.clear();
    a.clear();


    }

}