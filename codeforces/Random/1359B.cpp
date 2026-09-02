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
        long long n,m,x,y;
        cin >> n >> m >> x >> y;
        long long ans = 0;
        for(long long i = 0;i<n;i++)
        {
            string s;
            cin >> s;


            for(long long j = 0;j<m;j++)
            {
                if(s[j] == '*') continue;
                if(s[j] == '.')
                {
                    if(s[j+1] == '.' && j+1 < m)
                    {
                        if(x*2 < y)
                        {
                            ans += x*2;
                        }
                        else ans += y;

                        ++j;
                        
                    } 
                    else 
                    {
                        ans += x;
                    }
                }
            }
        }

        cout << ans << "\n"; 
    }

}