#include <bits/stdc++.h>
using namespace std;


unsigned long long check(long long p,long long k,long long n)
{
    unsigned long long summ = 0;
    unsigned long long cur = 1;
    for(long long i = 0;i<=p;i++)
    {
        summ += cur;
        if(summ > n) return n+1;
        if(i<p)
        {
            if(cur>n/k) return n+1;
            cur *=k;
        }
    }
    return summ;
}

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
        bool ans = false;
        for(long long i = 2;i<=60;i++)
        {
            long long l = 2;
            long long r = 1e9+100;
            
            while(r>=l)
            {
                long long m = l+(r-l)/2;
                unsigned long long sum = check(i,m,n);
                if(sum == n) 
                {
                    ans = 1;
                    break;
                } 
                if(sum > n)
                {
                    r = m-1;
                }
                else l = m+1;
            }
            if(ans) break;
            
        }

        cout << (ans ? "YES" : "NO") << "\n";
    }
}