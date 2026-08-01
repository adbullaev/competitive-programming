/*
 Problem: CSES - Grid Paths I
 Link: https://cses.fi/problemset/task/1638
 Editorial : media\CSES-Grid_Paths_I.md
*/
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;

    vector<vector<char>> grid(n+1 , vector<char>(n+1));

    for(long long i = 1;i<=n;i++)
    {
        string s;
        cin >> s;
        for(long long j = 1;j<=n;j++)
        {
            grid[i][j] = s[j-1];
        }
    }
    
    if(grid[n][n] == '*') 
    {
        cout << 0;
        return 0;
    }
    
    vector<vector<long long>> dp(n+1,vector<long long>(n+1,0));

    if(grid[1][1] == '.') dp[1][1] = 1;

    
    
    for(long long i = 1;i<=n;i++)
    {
        for(long long j = 1; j <=n;j++)
        {
            if(i == 1 && j == 1) continue;

            if(grid[i-1][j] == '.') dp[i][j] += dp[i-1][j];
            if(grid[i][j-1] == '.') dp[i][j] += dp[i][j-1];

            dp[i][j] %= MOD;
        }
    }
    
    
    cout << dp[n][n] << "\n";

}