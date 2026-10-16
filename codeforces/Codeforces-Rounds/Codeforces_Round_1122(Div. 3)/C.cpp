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
        cin >> n;
        string s;
        cin >> s;

        vector<long long> p(n,0);

        

        for(long long i = 1;i<n;i++)
        {
            if(s[i] == '1')
            {
                p[i] = p[i-1] + 1;
            }
            if(s[i] == '0')
            {
                p[i] = p[i-1];
            }
        }

        if(s[0] == '1')
        {
            cout << (n-1) - (p[n-1]-p[0]) << "\n";
            continue;
        }

        long long mn = 1e6;
        
        for(long long i = 0;i<n;i++)
        {
            long long steps = 0;
            steps += p[i];
            steps += (n-i-1) - (p[n-1]-p[i]);
            mn = min(mn,steps);    
        }

        cout << mn << "\n";
    }
}