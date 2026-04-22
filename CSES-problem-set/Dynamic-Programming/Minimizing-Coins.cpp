#include <bits/stdc++.h>
using namespace std;
long long n,x;
vector<long long> c;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> x;
    vector<long long> dp(x+1,1e6+1);
    for(long long i = 0;i<n;i++ )
    {
        long long inp;
        cin >> inp;
        c.push_back(inp);
    }
    dp[0] = 0;
    for(long long i = 1 ; i<=x;i++)
    {   
        for(long long ci : c)
        {
            if(i-ci>=0)
            {
                dp[i] = min(dp[i],dp[i-ci]+1);
            }
        }

    }

    cout << ((dp[x] == 1e6+1) ? -1:dp[x]) << "\n";
    
    
}