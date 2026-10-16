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
        long long a,b;
        cin >> a >> b;

        if(b>=a)
        {
            cout << "-1\n";
            continue;
        }
        else 
        {
            cout << min(b,a-b) << "\n";
        }

    }
    
}