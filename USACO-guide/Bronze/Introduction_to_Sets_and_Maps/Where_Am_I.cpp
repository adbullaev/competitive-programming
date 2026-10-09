#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);

    long long n;
    cin >> n;
    
    
    string s;
    cin >> s;

    for(long long i = 1;i<=n;i++)
    {
        map<string,long long> m;
        bool ok = true;
        for(long long j = 0;j+i<=n;j++)
        {
            string subs = s.substr(j,i);

            if(m[subs] != 0)
            {
                ok = false;
                break;
            }
            m[subs] = 1;
        }
        if(ok)
        {
            cout << i << "\n";
            break;
        }
    }

    

}