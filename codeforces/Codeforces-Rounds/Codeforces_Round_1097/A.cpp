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

        long long n;

        cin >> n;
        vector<long long> vec(n);
        
        for(long long i = 0;i<n;i++)
        {
            cin >> vec[i];
        }

        for(long long  i = n-2;i>=0;i--)
        {
            vec[i] = max(vec[i],vec[i]+vec[i+1]);
        }
        long long ans = 0;
        for(long long i = 0; i<n;i++)
        {
            if(vec[i]>0)
            {
                ans++;
            }
        }

        cout << ans << "\n";

    }

}