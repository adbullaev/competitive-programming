#include <bits/stdc++.h>
using namespace std;
 
struct DSU {
 
    vector<long long> p,sz,minv,maxv;
    
    DSU(long long n)
    {
        p.resize(n+1);
        sz.resize(n+1,1);
        minv.resize(n+1);
        maxv.resize(n+1);
        for(long long  i = 1;i<=n;++i)
        {
            p[i] = i;
            minv[i] = i;
            maxv[i] = i;
        }
    }
 
    long long get(long long a)
    {
        if(a == p[a]) return a;
        return p[a] = get(p[a]);
    }
 
    void unite(long long a,long long b)
    {
        a = get(a);
        b = get(b);
        
        if(a != b)
        {
            if(sz[a]<sz[b]) swap(a,b);
 
            p[b] = a;
            sz[a] += sz[b];
            minv[a] = min(minv[a],minv[b]);
            maxv[a] = max(maxv[a],maxv[b]);
        }
    }
 
    
};
 
 
long long n,m;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n >> m;
 
    DSU dsu(n);
 
    while(m--)
    {
 
        string operation;
        long long op1,op2;
 
        cin >> operation;
 
        if(operation == "union")
        {
            cin >> op1 >> op2;
            dsu.unite(op1,op2);
        }
 
        if(operation == "get")
        {
            cin >> op1;
            long long root = dsu.get(op1);
 
            cout <<dsu.minv[root] <<" "<< dsu.maxv[root] <<" " <<dsu.sz[root] << "\n";
        }
    }
}