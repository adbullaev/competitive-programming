
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
        long long n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(n<2*k) 
        {
            cout << "-1\n";
             
        }
        else
        {
            
            long long count = 0;
            for(long long i = 0;i<k;i++)
            {
                if(s[i] == 'R') count++;
            }

            for(long long i = n-k ;i<n;i++)
            {
                if(s[i] == 'L') count++;
            }
            
            cout << (2*k-count) << "\n";
            

        }
        

    }
}