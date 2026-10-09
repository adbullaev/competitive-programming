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
        k--;
        long long ans = 2;
        for(long long i = 1;i<n-k;i++)
        {
            ans*=2;
        }
        ans += 2*k;
        cout << ans << "\n";
    }

}