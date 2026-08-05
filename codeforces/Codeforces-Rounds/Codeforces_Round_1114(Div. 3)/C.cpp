#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string a ,b;

        cin >> a;
        cin >> b;

        int a_odds = 0;
        int b_odds = 0;
        int a_evens = 0;
        int b_evens = 0;

        for(int i = 0;i<n;i+=2)
        {
            if(a[i] == '1')
            {
                a_evens++;
            }
            if(b[i] == '1')
            {
                b_evens++;
            }

            
        }

        for(int i = 1;i<n;i+=2)
        {
            if(a[i] == '1')
            {
                a_odds++;
            }
            if(b[i] == '1')
            {
                b_odds++;
            }
        }

        if(a_odds == b_odds && a_evens == b_evens)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

     
}