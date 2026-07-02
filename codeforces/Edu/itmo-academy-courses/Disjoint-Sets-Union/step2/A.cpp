#include <bits/stdc++.h>
using namespace std;

struct DSU {

    vector<long long> p;
    

    DSU(long long n)
    {
        p.resize(n+1);
        iota(p.begin(),p.end(),0);
        
    }

    long long get(long long a)
    {
        return p[a] = (a == p[a] ? a : get(p[a]));
    }

    void unite(long long a,long long b)
    {      
        a = get(a);
        b = get(b);
        p[a] = p[b];
    }
};


long long n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    DSU dsu(n+1);

    while(m--)
    {

        string operation;
        long long op1,op2;

        cin >> operation >> op1 ;

        if(operation == "-") dsu.unite(op1,op1+1);
        if(operation == "?")
        {
            long long first = dsu.get(op1);
            if(first == n+1) cout << -1 << "\n";
            else cout << first << "\n";
        }
    }
}