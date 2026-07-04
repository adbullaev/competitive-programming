/*
📌 Problem: CSES - Building Roads
🔗 Link: https://cses.fi/problemset/task/1666

💡 Core Idea:
    We count number of connected components 
    Them connect one vertex to the others in other components
    
⏱️ Complexity Analysis:
   - Time Complexity: O(N+M) — we just count number of connected components
   - Space Complexity: O(N + M) —  we use adjacency list
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
    vector<long long> comp;
    vector<bool> visited(n+1,false);
    for(long long i = 1;i<=n;i++)
    {
        if(!visited[i])
        {
            comp.push_back(i);
            q.push(i);
            visited[i] = true;
            while(!q.empty())
            {
                long long v = q.front();
                q.pop();
                
                for(long long u: adj[v])
                {   
                    if(!visited[u]) 
                    {
                        q.push(u);
                        visited[u] = true;
                    }
                }
            } 
        }
    }

    long long roads = comp.size();
    cout << roads-1 << "\n";
    for(long long i = 1;i<roads;i++)
    {
        cout << comp[0] << " " <<  comp[i] << "\n"; 
    }

    

    
}