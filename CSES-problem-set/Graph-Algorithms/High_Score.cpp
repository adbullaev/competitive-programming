/*
📌 Problem: CSES - Cycle Finding
🔗 Link: https://cses.fi/problemset/task/1197

💡 Core Idea: 
   Use the Bellman-Ford algorithm to detect and reconstruct any negative cycle.
   1. Initialize the dist array with 0 instead of INF. This allows the algorithm 
      to detect negative cycles across all connected components simultaneously.
   2. Run the relaxation loop exactly N-1 times while updating the parents array 
      to track the shortest path tree.
   3. Perform the N-th iteration. If any distance can still be decreased, a negative 
      cycle exists. Store this vertex as target_vertex.
   4. To eliminate the "tail" (vertices affected by the propagation but not part of 
      the actual cycle), backtrack N times using the parents array. This guarantees 
      that target_vertex lands inside the cycle.
   5. Traverse backward through the cycle vertices until a repetition occurs, 
      store them, reverse the result, and print.
   
⏱️ Complexity Analysis:
   - Time Complexity: O(N * M) — we perform N iterations, relaxing all M edges in each. 
     The path reconstruction takes O(N) steps.
   - Space Complexity: O(N + M) — O(M) space for storing edges and O(N) for dist, 
     parents, visited, and result arrays.
*/
#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    long long from,to,cost;
};

const long long INF = 1e18;
vector<bool> visited;
vector<vector<pair<long long,long long>>> cadj;
vector<vector<pair<long long,long long>>> adj;

void dfs(long long v)
{
    visited[v] = true;
    for(pair<long long,long long> u : cadj[v])
    {
        if(!visited[u.first]) dfs(u.first);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;
    vector<long long> dist(n+1,INF);
    cadj.resize(n+1);
    adj.resize(n+1);
    visited.resize(n+1);
    vector<Edge> edges;
    
    for(long long i = 0;i<m;i++)
    {
        long long a, b, c;
        cin>>a >>b >>c;
        cadj[b].push_back({a,c});
        adj[a].push_back({b,c});
    }
    dfs(n);

    for(long long i = 1;i<=n;i++)
    {
        if(visited[i])
        {
            for(pair<long long,long long> u : adj[i])
            {
                edges.push_back({i,u.first,u.second*-1});
            }
        }
    }


    dist[1] = 0;

    for(long long i = 1;i<n;i++)
    {
        for(Edge e : edges)
        {
            if(dist[e.from] < INF)
            {
                dist[e.to] = min(dist[e.to],dist[e.from]+e.cost);
            }
        }
    }

    for(Edge e : edges)
    {
        if(dist[e.from] < INF && dist[e.to] > min(dist[e.to],dist[e.from]+e.cost))
        {
            cout << "-1\n";
            return 0;
        }
    }
    
    cout << dist[n]*-1 << "\n";



}