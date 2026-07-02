#include <bits/stdc++.h>
using namespace std;

struct DSU {

    vector<long long> p;
    vector<long long> sz;

    DSU(long long n)
    {
        p.resize(n+1);
        iota(p.begin(),p.end(),0);
        sz.assign(n+1,1);
    }

    long long get(long long a)
    {
        return p[a] = (a == p[a] ? a : get(p[a]));
    }

    void unite(long long a,long long b)
    {
        a = get(a);
        b = get(b);
        
        if(a != b)
        {
            if(sz[a] == sz[b]) sz[a]++;
            if(sz[a]>sz[b]) p[b] = a ;
            else p[a] = b;
        }
    }
};


long long n,q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;

    DSU dsu(n);

    while(q--)
    {
        string type;
        long long x,y;

        cin >> type >> x >> y;

        
        
    }
}