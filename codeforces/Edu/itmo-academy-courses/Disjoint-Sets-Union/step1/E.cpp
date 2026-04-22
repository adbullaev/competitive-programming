#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<long long> p;
    vector<long long> sz;
    vector<bool> is_tree;
    vector<vector<long long>> comps;
    vector<long long>& ans;
    
    DSU(long long n, vector<long long>& answers) : ans(answers)
    {
        p.resize(n+1);
        sz.resize(n+1,1);
        is_tree.resize(n+1, false);
        comps.resize(n+1);
        for(long long i = 1 ; i<=n;i++) 
        {
            p[i] = i;
            comps[i].push_back(i); 
        }
        is_tree[1] = true; 
    }

    long long ask(long long u)
    {
        return p[u] = ((p[u] == u)? u : ask(p[u]));
    }

   
    void unite(long long u, long long v, long long time)
    {
        u = ask(u);
        v = ask(v);
        if(u!=v)
        {
            if(is_tree[u] && !is_tree[v]) 
            {
                for(long long x : comps[v]) ans[x] = time;
                comps[v].clear();
            } 
            else if(!is_tree[u] && is_tree[v]) 
            {
                for(long long x : comps[u]) ans[x] = time;
                comps[u].clear();
            }

            
            if(sz[u]<sz[v]) swap(u,v);
            p[v] = u;
            sz[u]+=sz[v];
            is_tree[u] = is_tree[u] | is_tree[v];
            
            
            if(!is_tree[u]) 
            {
                for(long long x : comps[v]) comps[u].push_back(x);
                comps[v].clear();
            }
        }
    }
};

struct operation
{
    long long monkey;
    long long hand;
};

long long n, m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    vector<long long> L(n + 1), R(n + 1);
    for(long long i = 1 ; i<=n;i++)
    {
        cin >> L[i] >> R[i];
    }

    vector<operation> op(m);
    vector<bool> drop_L(n + 1, false), drop_R(n + 1, false);

    for(long long i = 0 ; i<m;i++)
    {
        cin >> op[i].monkey >> op[i].hand;
        if(op[i].hand == 1) drop_L[op[i].monkey] = true;
        else drop_R[op[i].monkey] = true;
    }

    vector<long long> answers(n + 1, -1);
    DSU dsu(n, answers);

   
    for(long long i = 1 ; i<=n;i++)
    {
        if(!drop_L[i] && L[i] != -1) dsu.unite(i, L[i], -1);
        if(!drop_R[i] && R[i] != -1) dsu.unite(i, R[i], -1);
    }

  
    for(long long i = m - 1; i>=0;i--)
    {
        long long u = op[i].monkey;
        long long v = (op[i].hand == 1) ? L[u] : R[u];
        
        if(v != -1) 
        {
            dsu.unite(u, v, i);
        }
    }

    
    for(long long i = 1; i<=n;i++)
    {
        cout << answers[i] << "\n";
    }

    return 0;
}