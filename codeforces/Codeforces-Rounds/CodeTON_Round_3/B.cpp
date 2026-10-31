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
        s.push_back('2');
        long long zeros = 0;
        long long ones = 0;
        long long max_ones = 0;
        long long max_zeros = 0;
        long long len = 0;
        for(long long i = 0;i<=n;i++)
        {
            if(s[i] == '1') ones++;
            if(s[i] == '0') zeros++;
            if(s[i] != s[i-1] && i != 0)
            {
               if(s[i-1] == '1')
               {
                    max_ones = max(max_ones,len);
               }
               else 
               {
                    max_zeros = max(max_zeros,len);
               }
               
               len = 0;
            }
            
            len++;
        }

        cout << max(max((max_ones * max_ones),(max_zeros*max_zeros)),(zeros * ones)) << "\n";

    }


    

}
