/*
 Problem: CSES - Minimizing Coins
 Link: https://cses.fi/problemset/task/1634
 Editorial : media\CSES-Minimizing_Coins.md
*/
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e8;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,x;
    cin >> n >> x;

    vector<long long> c;

    for(long long i  = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        c.push_back(inp);
    }

    vector<long long> dp(x+1,INF);
    dp[0] = 0;

    for(long long i = 1;i<=x;i++)
    {
        for(long long j = 0; j < n;j++ )
        {
            if(i-c[j] >= 0)
            {
                dp[i] = min(dp[i],dp[i-c[j]]);
            }
        }
        dp[i] += 1;
    }
      
    if(dp[x] > 1e7) cout << "-1";
    else cout << dp[x];
    
    

}