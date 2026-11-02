#include <bits/stdc++.h>
using namespace std;

const long long INF = 3e5 + 100;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    
    
    
    
    
    while(t--)
    {
        long long n,x;
         cin >> n >> x;

        vector<long long> a;
        for(long long i=0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp);
        }
        
        if(x == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        vector<long long> D;
        for(long long i = 2;i*i<=x;i++)
        {
            if(x%i == 0)
            {
                D.push_back(i);
                if(x/i != i) D.push_back(x/i);
            }
        }

        D.push_back(x);

        long long result = 0;

        for(long long c:D)
        {
            long long local_result = 0;

            for(long long i = 0;i<n;i++)
            {
                if(a[i]%c == 0) 
                {
                    local_result+=a[i];
                }
            }
            result = max(result,local_result);
        }
        cout << result << "\n";
    }
    
    

}
