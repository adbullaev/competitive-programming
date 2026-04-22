#include <bits/stdc++.h>
using namespace std;
 
struct DSU {
 
    vector<long long> p,sz,exp;
    
    DSU(long long n)
    {
        p.resize(n+1);
        sz.resize(n+1,1);
        exp.resize(n+1,0);
        for(long long  i = 1;i<=n;++i) p[i] = i;
        
    }
 
    long long get(long long i)
    {
       while(i != p[i]) i = p[i];
       return i;
    }
 
 
 
    long long get_exp(long long i)
    {
        long long total = 0;
        while(i != p[i])
        {
            total += exp[i];
            i = p[i];
        }
        total += exp[i];
        return total;
    }
 
    void join(long long a,long long b)
    {
        a = get(a);
        b = get(b);
        
        if(a != b)
        {
            if(sz[a]<sz[b]) swap(a,b);
            p[b] = a;
            sz[a] += sz[b];
            exp[b]-=exp[a];
        }
    }
 
    void add(long long x,long long v)
    {
        long long root = get(x);
        exp[root] += v;
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
 
        if(operation == "join")
        {
            cin >> op1 >> op2;
            dsu.join(op1,op2);
        }
 
        if(operation == "get")
        {
            cin >> op1;
            cout << dsu.get_exp(op1) << "\n";
        }
        if(operation == "add" )
        {
            cin >> op1 >> op2;
            dsu.add(op1,op2);
        }
    }
}
