#include <bits/stdc++.h>
using namespace std;

bool is_polyndrom(string &s)
{
    for(long long i = 0;i<s.size();i++)
    {
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}

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
        string sa = s+'a';
        string as = 'a' + s;
        if(!is_polyndrom(sa)) 
        {
            cout <<"YES\n";
            cout << sa << "\n";
        }
        else if(!is_polyndrom(as))
        {
            cout <<"YES\n";
            cout << as << "\n";
        }
        else cout << "NO\n"; 
    }

}