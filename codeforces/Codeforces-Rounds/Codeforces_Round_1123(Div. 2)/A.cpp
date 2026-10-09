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
        char c;
        cin >> n >> c;

        string s;
        cin >> s;
        long long changes = 0;

        for(long long i = 0;i<(n/2) + n%2 ;i++)
        {
            if(s[i] == s[n-1-i]) continue;
            else
            {
                if(s[i] != c ) changes++;
                if(s[n-1-i] != c) changes++;
            }
        }

        cout << changes << "\n";
        
    }
}