#include <bits/stdc++.h>
using namespace std;


long long n,x; 
const long long MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x;
    vector<long long> c;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        c.push_back(inp);
    }

    vector<long long> dp(x+1,0);
    dp[0] = 1;
    for(long long ci : c)
    {
        for(long long i = ci;i<=x;i++)
        {
        
                if(i - ci >= 0)
                {
                    dp[i] =(dp[i] + dp[i-ci]) % MOD;
                }
        }

    }

    cout << dp[x] << "\n";

}