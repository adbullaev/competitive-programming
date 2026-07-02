#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long n,m;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<long long> x(n+1);
    for(long long i = 1;i<=n;i++)
    {
        cin >> x[i];
    }

    vector<vector<long long>> dp(n+2,vector<long long>(m+2,0));
    if(x[1] == 0) 
    {   
        for(long long i = 1;i<=m;i++) dp[1][i] = 1;
    }  
    else dp[1][x[1]] = 1;
    for(long long i = 2;i<=n;i++)
    {   
        if(x[i] == 0)
        {
            for(long long v = 1;v<m;v++ )
            {
                
                dp[i][v] = (dp[i-1][v-1]+dp[i-1][v]+dp[i-1][v+1])%MOD;
            }
            dp[i][m] = (dp[i-1][m-1]+dp[i-1][m])%MOD;
        }
        else
        {
            dp[i][x[i]] = (dp[i-1][x[i]-1] + dp[i-1][x[i]] + dp[i-1][x[i]+1])%MOD;
        }
    }
    long long result = 0;
    for(long long i = 1;i<=m;i++)
    {
        result = (result + dp[n][i])%MOD;
    }

    cout << result << "\n";

}