#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("notlast.in","r",stdin);
    freopen("notlast.out","w",stdout);
    

    long long n;
    cin >> n;
    map<string,long long> m;
    for(long long i = 0;i<n;i++)
    {
        string cow;
        long long milk;
        cin >> cow >> milk;
        m[cow] += milk;
    }
    
    set<long long> s;

    for(const auto& p : m)
    {
        s.insert(p.second);
    }

    auto sec = next(s.begin());

    if(m.size() != 7)
    {
        sec = s.begin();
    }
    long long num_cows =0 ;
    string ans ;
    for(const auto& c : m)
    {
        if(c.second == *sec)
        {
            num_cows++;
            ans = c.first; 
        }
        if(num_cows > 1)
        {
            cout << "Tie\n";
            return 0;
        }
        
    }

    cout << ans << "\n";
    
    

}