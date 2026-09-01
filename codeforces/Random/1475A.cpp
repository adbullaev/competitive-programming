#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> degs;

    for(long long i = 2;i<=1e14;i*=2)
    {
        degs.push_back(i);
    }

    long long t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        if(find(degs.begin(),degs.end(),n) != degs.end())
        {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}