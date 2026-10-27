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
        long long n;
        cin >> n;

        vector<long long> p(n+1,0);
        vector<long long> ch;

        for(long long i = 1;i<n;i++)
        {
            long long inp;
            cin >> inp;
            p[i+1] = inp;
            if(inp == 1) ch.push_back(i+1);
        }

        long long m;
        cin >> m;

        vector<long long> a;

        for(long long i = 0;i<m;i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp);
        }

        if(m == 1)
        {
            cout <<"0\n";
        }
        else 
        {
            sort(a.begin(),a.end());
            cout << m-1 <<" ";
            for(long long i = 1;i<m;i++)
            {
                cout << a[i] << " ";
            }
        }

    }
    
}
