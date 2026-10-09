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
        string field;

        cin >> field;

        long long ans = 0;

        for(long long i = 0;i<(n/k + n%k);i++)
        {   
            bool is_paid = true;
            for(long long j = i*k;j<(i+1)*k;j++)
            {
                if(field[j] == '0') is_paid = false;
            }
            ans += is_paid;
        }
        cout << ans << "\n";
    }

}