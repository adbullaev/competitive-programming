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
        cout << "? " << 1 << " " << n << endl;
        long long k;
        cin >> k;
        if(k == -1) exit(0);
        else if(k == 0 || k == n)
        {
            cout << "! NO" << endl;
            continue;
        }
        else if(k == 1)
        {
            long long k1;
            cout << "? " << 2 << " " << n << endl; 
            cin >> k1;
            if(k1 == -1) exit(0);
            else if(k1 == 0)
            {
                cout << "! NO" << endl;
                continue;
            }
            cout << "! YES" << endl;
        }
        else 
        {
            long long k1;
            cout << "? " << 1 << " " << k << endl; 
            cin >> k1;
            if(k1 == -1) exit(0);
            else if(k1 == k)
            {
                cout << "! NO" << endl;
                continue;
            }
            cout << "! YES" << endl;
        }
    }

}