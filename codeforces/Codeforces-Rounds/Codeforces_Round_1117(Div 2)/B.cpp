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

        long long n_p = 0;
        long long m_p = 0;

        vector<long long> one;
        vector<long long> two;
        
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            one.push_back(inp);
        }
        
        for(long long i = 0;i<m;i++)
        {
            long long inp;
            cin >> inp;
            two.push_back(inp);
        }

        for(long long i = 0;i<n-1;i++)
        {
            n_p += (one[i]-(one[i+1]-1));
        }
        n_p += one[n-1];

        for(long long i = 0;i<m-1;i++)
        {
            m_p += (two[i]-(two[i+1]-1));
        }
        m_p += two[m-1];
        
        if(m_p == n_p)
        {
            cout << "1\n";
        }
        else if(n_p > m_p)
        {
            cout << "1\n";
        } else cout << "2\n";
        
    }
    
}
