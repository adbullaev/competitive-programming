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
        long long a,b,c;
        cin >>a >>b >>c;
        if(a<b )
        {
            if(b-a > (a+c)-b) cout << b-a << "\n";
            else cout << (a+c)-b << "\n";
        } 
        else if(a>=b)
        {
            cout << (a+c)-b << "\n";
        }
        

    }

}