#include <bits/stdc++.h>
using namespace std;

long long start_vertex;
long long n;
vector<vector<int>> g;


vector<long long> colors(n+1 , 0);
vector<long long> topo_order;
vector<long long> parents(n+1);

void dfs(int v) {
    colors[v] = 1;
    for (int u : g[v]) {
        if (colors[u] == 0) dfs(u);
    }
    colors[v] = 2;
    topo_order.push_back(v);
}

int main()
{

    // Full-DFS
    for(long long i = 1;i<=n;i++)
    {
        if(colors[i] == 0) dfs(i);
    }
    reverse(topo_order.begin(),topo_order.end());


    // Kan's Algorithm
    // for Kan's algorithm we fill in_deg array with values when we read graph  
    vector<long long> in_deg(n+1,0);
    queue<long long> q;

    for(long long i = 1;i<=n;i++)
    {
        if(in_deg[i] == 0) q.push(i); 
    }

    while(!q.empty())
    {
        long long v = q.front();
        q.pop();

        for(long long u:g[v])
        {
            in_deg[u]--;
            if(in_deg[u] == 0)
            {
                q.push(u);
            }
        }
    }

    // min topo-order

    vector<long long> in_deg(n+1,0);
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    for(long long i = 1;i<=n;i++)
    {
        if(in_deg[i] == 0) pq.push(i); 
    }

    while(!pq.empty())
    {
        long long v = pq.top();
        pq.pop();

        for(long long u:g[v])
        {
            in_deg[u]--;
            if(in_deg[u] == 0)
            {
                pq.push(u);
            }
        }
    }

    // max topo-order

    vector<long long> in_deg(n+1,0);
    priority_queue<long long,vector<long long>,less<long long>> pq;

    for(long long i = 1;i<=n;i++)
    {
        if(in_deg[i] == 0) pq.push(i); 
    }

    while(!pq.empty())
    {
        long long v = pq.top();
        pq.pop();

        for(long long u:g[v])
        {
            in_deg[u]--;
            if(in_deg[u] == 0)
            {
                pq.push(u);
            }
        }
    }

    // check if topo-order is unique
    vector<long long> in_deg(n+1,0);
    queue<long long> q;
    bool is_unigue = true;

    for(long long i = 1;i<=n;i++)
    {
        if(in_deg[i] == 0) q.push(i); 
    }

    while(!q.empty())
    {
        if(q.size()>1)
        {
            is_unigue = false;
            break;
        }
        long long v = q.front();
        q.pop();

        for(long long u:g[v])
        {
            in_deg[u]--;
            if(in_deg[u] == 0)
            {
                q.push(u);
            }
        }
    }

}