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


        long long first_a,first_b;
       
        
        for(long long i = 0;i < (long long)s.size();i++)
        {
            if(s[i] == '0') 
            {
                first_a = i;
                break; 
            }
        }
        
        s.erase(first_a,1);
       

        for(long long i = 0;i < (long long)s.size();i++)
        {
            if(s[i] == '1') 
            {
                first_b = i;
                break; 
            }
        }

        s.erase(first_b,1);
        cout << s << "\n";
    }
}