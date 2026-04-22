#include <bits/stdc++.h>
using namespace std;

long long n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<long long> dp(n+1,1e6+1);
    dp[0] = 0;

    for(long long i = 1;i<=n;i++)
    {
        long long temp = i;

        while(temp>0)
        {
            long long digit = temp % 10;
            dp[i] = min(dp[i],dp[i-digit]+1);
            temp /= 10;
        }
    }

    cout << dp[n];

}