/*
 Problem: CSES - Dice Combinations
 Link: https://cses.fi/problemset/task/1633
 Editorial : ./media/CSES-Dice_Combinations.md
*/
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7; 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long > dp(n+1,0);

    dp[0] = 1;
    
    for(long long i = 1;i<=n;i++)
    {
        long long minv = min(i,(long long)6);
        for(long long j = 1;j<=minv;j++)
        {
            dp[i] += dp[i-j];
            dp[i] %= MOD;
        }
    }

    cout << dp[n] << "\n";
    

}