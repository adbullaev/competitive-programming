#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<long long> vec(n+1,0);

    for(long long i = 1;i<=n;i++)
    {
        long long inp;
        cin >> inp;
        vec[i] = inp;
    }   

    sort(vec.begin(),vec.end());

    vector<long long> dp(n+1);


    dp[0] = 0;
    dp[1] = vec[1];
    dp[2] = vec[2]-vec[1];
    dp[3] = vec[3]-vec[1];
    for(long long i = 4;i<=n;i++)
    {
        dp[i] = min(dp[i-2],dp[i-1]) + vec[i]-vec[i-1];
    }
    
    cout << dp[n] << "\n";


}

