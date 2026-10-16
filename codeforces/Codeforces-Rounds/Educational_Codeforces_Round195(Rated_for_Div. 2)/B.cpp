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
        string s;
        cin >> s;

        long long ans = 1;

        if(s.find("101") != string::npos) ans++;
        else if(s.find("010") != string::npos) ans++;
        if(s.find("111") != string::npos) ans++;
        else if(s.find("000") != string::npos) ans++;

        cout << ans << "\n";
        
        
    }
}