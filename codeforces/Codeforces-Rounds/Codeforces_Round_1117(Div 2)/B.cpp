#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n,m;
        cin >> n >> m;

        set<char> st;

        for(long long i = 0;i<n;i++)
        {
            string s;
            cin >> s;
            st.insert(s[0]);
        }

        bool exist = true;
        while(m--)
        {
            string s;
            cin >> s;

            for(long long i = 0;i<s.size();i++)
            {
                if(st.find(tolower(s[i])) == st.end())
                {
                    exist = false;
                }
            }

        }    

        if(exist) cout << "YES\n";
        else cout << "NO\n";

        
    }
    
}
