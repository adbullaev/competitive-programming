#include <bits/stdc++.h>
using namespace std;

long long n;
const long long MOD = 1e9 + 7;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<long long> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    for(long long i = 2;i<=6;i++)
    {
        dp[i] = (dp[i-1]*2)%MOD;
    }

    for(long long i = 7;i<=n;i++ )
    {
        for(long long j = i-6;j<i;j++)
        {
           dp[i] += dp[j];
           dp[i]%=MOD;
        }
         
    }
    
    
    cout << dp[n] << "\n";

}