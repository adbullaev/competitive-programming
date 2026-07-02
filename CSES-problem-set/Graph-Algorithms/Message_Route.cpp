/*
📌 Problem: CSES - Message Route
🔗 Link: https://cses.fi/problemset/task/1667

💡 Core Idea:
    Since the graph is unweighted, we can find the shortest path from computer 1 
    to computer N using Breadth-First Search (BFS). We track each node's discoverer 
    using a `parents` array. Once BFS finishes, if node N was visited, we backtrack 
    from N to 1 using the `parents` array to reconstruct the exact path.
    
    
⏱️ Complexity Analysis:
   - Time Complexity: O(V+E) 
   - Space Complexity: O(V+E) 
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;

    cin >> n >> m;

    vector<vector<long long>> adj(n+1);

    for(long long i = 0;i<m;i++)
    {
        long long u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<long long> q;
    vector<long long> parents(n+1,-1);
    vector<bool> visited(n+1,false);
    bool is_path = false;
    q.push(1);
    visited[1] = true;
    parents[1] = 0;

    while(!q.empty())
    {
        long long v = q.front();
        q.pop();
        for(long long u : adj[v])
        {
            if(!visited[u])
            {
                q.push(u);
                parents[u]=v;
                visited[u] = true;
            }
        }
    }

    if(visited[n]) 
    {
        vector<long long> path;
        long long v = n;
        while(parents[v] != 0)
        {
            path.push_back(parents[v]);
            v = parents[v];
        }
        reverse(path.begin(),path.end());
        long long len = path.size();
        cout << len+1 << "\n";
        for(long long i = 0;i<len;i++)
        {
            cout << path[i] << " " ;
        }
        cout << n << "\n";
    }
    else cout << "IMPOSSIBLE" << "\n";
    
}