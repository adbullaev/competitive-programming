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
        long long a,b,c;
        cin >> n;
        cin >> a >> b >> c;

        cout << n - min(a,min(b,c)) << "\n";
    }

}