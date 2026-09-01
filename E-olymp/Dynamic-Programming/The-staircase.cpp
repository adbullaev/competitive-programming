#include <bits/stdc++.h>
using namespace std;

const long long NEGINF = -1e6;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long> vec(n+2);
    vec[0] = 0;
    vec[n+1] = 0;
    for(long long i = 1;i<=n;i++)
    {
        long long inp;
        cin >> inp;
        vec[i] = inp;
    }

    long long k;
    cin >> k;

    vector<long long> dp(n+2,NEGINF);
    dp[0] = 0;
     

    for(long long i =0;i<=n;i++)
    {
        for(long long j = 1;j<=k;j++)
        {
            if(i+j<=n+1)
            {
                dp[i+j] = max(dp[i+j],dp[i]+vec[i+j]);
            }
        }
    }

    cout << dp[n+1] << "\n";
   

    
}
