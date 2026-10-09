#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    
    long long mult = 1;
    vector<long long> vec ;

    for(long long i = 1;i<n;i++)
    {
        if(gcd(n,i) == 1)
        {
            vec.push_back(i);
            mult = (mult * i) % n;
        }
    }

    long long skip = -1;

    if(mult != 1)
    {
        skip = n-1;
    }
    long long ans = vec.size() - ((skip != -1) ?  1 : 0);
    cout << ans << "\n";

    for(long long x : vec)
    {
        if(x!=skip)
        {
            cout << x << " ";
        }
        
    }
}