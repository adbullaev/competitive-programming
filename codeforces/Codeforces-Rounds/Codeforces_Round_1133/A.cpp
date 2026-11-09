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
        long long n ,k;
        cin >> n >> k;
        long long odds_a = 0,odds_b = 0;
        long long evens_a = 0, evens_b = 0;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;

            if(inp % 2 == 0) evens_a++;
            else odds_a++;
        }
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;

            if(inp % 2 == 0) evens_b++;
            else odds_b++;
        }

        if(evens_a == evens_b && odds_a == odds_b)
        {
            cout << "YES\n";
        }
        else
        {
            if(evens_a == 0 && odds_b == 0 && k %2 == 0)
            {
                cout << "YES\n";
            }
            else if(evens_b == 0 && odds_a == 0 && k %2 == 1)
            {
                cout << "YES\n";
            }
            else if(odds_a > odds_b  && k %2 == 0)
            {
                cout << "YES\n";
            }
            else if(evens_a > evens_b  && k %2 == 1)
            {
                cout << "YES\n";
            }  
            else cout << "NO\n"; 
        }

        
    }

}