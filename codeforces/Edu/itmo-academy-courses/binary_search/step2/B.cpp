#include <bits/stdc++.h>
using namespace std;

bool f(vector<long long>& vec,double x, long long k)
{
    long long num = 0;
    for(long long n : vec)
    {
        num += (double)n/x;    
    }

    return (num >= k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,k;
    cin >> n >> k;

    vector<long long> vec;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        vec.push_back(inp);
    }

    double l = 0;
    double r = 1e18;

    for(long long i = 0;i<100;i++)
    {
        double m = (l+r)/2;
        
        if(f(vec,m,k))
        {
            l=m;
        }
        else r = m;
    }

    cout  << fixed << setprecision(6) << l << "\n";

    
    
    

}