#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
string odds {"2468"};
int main()
{
    cin >> n ;
    for(long i = 0; i<n; i++)
    {
        cin >> s;
        auto l = odds.find(s[s.size()-1]);
        auto f = odds.find(s[0]);
        if(l != string::npos ) cout << 0 << endl;
        else if( f != string::npos) cout << 1 << endl;
        else if(s.find_first_of(odds) == string::npos) cout << -1 << endl;
        else cout << 2 << endl; 
        
    }
    return 0;
}