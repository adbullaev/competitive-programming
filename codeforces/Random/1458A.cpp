#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;


    vector<long long> a,b;

    

    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a.push_back(inp);
    }
    for(long long i = 0;i<m;i++)
    {
        long long inp;
        cin >> inp;
        b.push_back(inp);
    }
    long long g;
    if(n == 1)
    {
        g = 0;
    }
    else g = abs(a[1]-a[0]);

    for(long long i = 2;i<n;i++)
    {
        g = gcd(g,abs(a[i]-a[0]));
    }

    for(long long i = 0 ;i<m;i++)
    {
        cout << gcd(a[0]+b[i],g) << " ";
    }

}