/*
 Problem: CSES - Coin Combinations I
 Link: https://cses.fi/problemset/task/1635
 Editorial : media\CSES-Coin_Combinations_I.md
*/
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n,x;
    cin >> n >> x;

    vector<long long> c;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        c.push_back(inp);
    }

    vector<long long> dp(x+1,0);
    dp[0]=1;
    
    for(long long i = 1;i<=x;i++)
    {
        for(long long j = 0;j<n;j++)
        {
            if(c[j] <= i) 
            {
                dp[i] += dp[i-c[j]];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[x] << "\n";
    

}