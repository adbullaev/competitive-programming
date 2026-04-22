#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<long long> p;
    
    DSU(long long n)
    {
        iota(p.begin(),p.end(),n);
    }

    long long get(long long u)
    {
         return p[u] = (p[u] == u ? u : get(p[u]));
    }

    void unite(long long x , long long xpp)
    {
        x =     
        if()
        

    }

}

long long n,m;



int main()
{



}