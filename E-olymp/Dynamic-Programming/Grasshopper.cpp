#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,k;

    cin >> n >> k;

    vector<long long> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(long long i = 1;i<=n;i++)
    {
        for(long long j = 1;j<=k;j++)
        {
            if(i+j<=n)
            {
                dp[i+j] += dp[i];
            }
        }
    }

    cout << dp[n];

}