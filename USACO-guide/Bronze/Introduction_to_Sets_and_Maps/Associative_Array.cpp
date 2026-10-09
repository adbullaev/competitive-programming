#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long q;
    cin >> q;
    
    map<long long ,long long> m;

    for(long long i = 0;i<q;i++)
    {
        long long inp,k,v;
        cin >> inp;
        if(inp == 0)
        {
            cin >> k >> v;
            m[k] = v;
        }
        else if(inp == 1)
        {
            cin >> k;
            cout << m[k] << "\n";
        }
    }

}