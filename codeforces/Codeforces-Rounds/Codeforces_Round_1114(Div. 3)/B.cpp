#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int comp_sz = 0;

        for(int i = 0;i<n;i++)
        {
            if(i == 0||s[i-1] != s[i])
            {
                comp_sz++;
            }
        }

        int min_sz = 1e10; 

        
        for(long long i = 1; i < n - 1; i++)
        {
            if(s[i] == s[i-1] || s[i] == s[i+1])
            {
                min_sz = min(min_sz, comp_sz);
            }
            else if(s[i-1] == s[i+1])
            {
                min_sz = min(min_sz, comp_sz - 2);
            }
            else
            {
                min_sz = min(min_sz, comp_sz - 1);
            }
        }
        
        cout << min_sz << "\n";

    }
     
}