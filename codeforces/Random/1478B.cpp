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
        long long q,d;
        cin >> q >> d;

        for(long long i = 0;i<q;i++)
        {
            long long n;
            cin >> n;

            if(n>=d*10)
            {
                cout << "YES\n";
            }
            else
            {
                bool is_good = false;
                while(n>=0)
                {
                    n-=d;
                    if((n%10) == 0)
                    {
                        is_good = true;
                        break;
                    }
                }
                if(is_good)
                {
                    cout << "YES\n";
                }
                else cout << "NO\n";
            }

        }
    }
}