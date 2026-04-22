#include <bits/stdc++.h>
using namespace std;

struct DSU
{

    vector<long long> p;
    vector<long long> sz;
    
    DSU(long long n)
    {
        p.resize(n+1);
        sz.resize(n+1,1);
        for(long long i = 1 ; i<=n;i++) p[i] = i;
    }

    long long ask(long long u)
    {
        return p[u] = ((p[u] == u)? u : ask(p[u]));
    }

    void cut(long long u,long long v)
    {

        u = ask(u);
        v = ask(v);
        if(u!=v)
        {
            if(sz[u]<sz[v]) swap(u,v);
            p[v] =u;
            sz[u]+=sz[v];
        }
    }

};

struct operation
{
    string type;
    long long value1,value2;
};

long long n,m,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;

    for(long long i = 0 ; i<m;i++)
    {
        long long trash1,trash2;
        cin >> trash1 >> trash2;
    }

    DSU dsu(n);

    vector<operation> op(k+1);
    vector<long long> answers;

    for(long long i = 1 ; i<=k;i++)
    {
        cin >> op[i].type >> op[i].value1 >> op[i].value2;
    }

    for(long long i = k;i>0;i--)
    {
        if(op[i].type == "ask") 
        {
            if(dsu.ask(op[i].value1) == dsu.ask(op[i].value2)) answers.push_back(1);
            else answers.push_back(0);
        }
        if(op[i].type == "cut") dsu.cut(op[i].value1,op[i].value2);
    }
    long long sizeans = answers.size();
    for(long long  i = sizeans-1; i>=0;i--)
    {
        if(answers[i] == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}