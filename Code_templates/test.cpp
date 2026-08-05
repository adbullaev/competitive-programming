#include <bits/stdc++.h>
using namespace std;

void dfs(int v) {
    colors[v] = 1;
    for (int u : g[v]) {
        if (colors[u] == 0) dfs(u);
    }
    colors[v] = 2;
    topo_order.push_back(v);
}


void dfsrev(int v,int c) {
    components[v] = c;
    for (int u : g[v]) {
        if (components[u] == 0)
        {
            dfs(u,c);
        } 
        

    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1;i<=n;i++)
    {
        if(colors[i]==0)
        {
            dfs(i);
        }
    }
    reverse(topo_order.begin(),topo_order.end());
    int n_colors = 1;
    for(int i =0;i<topo_order.size();i++)
    {
        if(components[topo_order[i]] == 0 ) 
        {
            dfsrev(topo_order[i],n_colors);
            n_colors++;
        }
    }
}