#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long t;
    cin >> t;

    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long > a;
        a.push_back(0);

        for(long long i=0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp%k);
        }

        vector<long long> prefix_sums(n+1,0);
        prefix_sums[0] = 0 ;
        for(long long i=1;i<=n;i++)
        {
            prefix_sums[i] = (a[i] + prefix_sums[i-1])%k;
        }
        long long ans = 0;
        vector<long long> cnt(k+1,0);
        for(long long i = k+1;i<=n;i++)
        {
            long long j = i -k-1;
            cnt[prefix_sums[j]]++;
            ans+=cnt[prefix_sums[i]];
        }
        
        cout << ans << "\n";

    }

}