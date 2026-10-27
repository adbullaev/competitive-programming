#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);

    long long t;
    cin >>t;
    while(t--)
    {
        long long n;
        cin >> n;

        long long mina = 2e9;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            mina = min(mina,inp);
        }

        if(mina >=n)cout << 0 << "\n";
        else cout << n << "\n";
    }
}
