#include <bits/stdc++.h>
using namespace std;

const long long INF = 3e5 + 100;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    vector<set<long long>> sieve(INF);
    for(long long i = 2;i<=INF;i++)
    {
        for(long long j = i;j<=INF;j+=i)
        {
            sieve[j].insert(i);
        }
    }
    
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

        long long result = 0;

        for(long long c:sieve[x])
        {
            long long local_result = 0;

            for(long long i = 0;i<n;i++)
            {
                if(sieve[a[i]].count(c)) 
                {
                    local_result+=a[i];
                }
            }
            result = max(result,local_result);
        }
        cout << result << "\n";
    }
    
    

}
