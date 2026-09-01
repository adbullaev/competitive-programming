#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;

    vector<long long> vec(n+1,0);

    for(long long i = 1;i<=n;i++)
    {
        long long inp;
        cin >> inp;
        if(i == 1) continue;
        vec[i] = inp;
    }

    vector<long long> dp(n+1,0);
    for(long long i = 1;i<=n;i++)
    {
        for(long long j = 2;j<=3;j++)
        {
            if(i-j>=0)
            {
                dp[i] = max(dp[i],dp[i-j] + vec[i]) ;
            }
        }
    }

    cout << dp[n] << "\n";
    
}
