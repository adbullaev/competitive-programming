#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long n;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<vector<long long>> dp(n+1,vector<long long>(n+1,1));
    for(long long i = 0;i<=n;i++)
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for(long long i = 1;i<=n;i++)
    {
        string s;
        cin >> s;
        if(i == 1 && s[0] == '.') dp[1][1] = 1;
        for(long long j = 0;j<n;j++)
        {
            if(s[j] == '*') dp[i][j+1] = 0;   
        }
    }
    


    for(long long i = 1;i<=n;i++)
    {
        for(long long j = 1; j <=n;j++)
        {
            if(dp[i][j] == 0 ) continue;
            if(i == 1 && j == 1) continue;

            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }

    cout << dp[n][n];
}