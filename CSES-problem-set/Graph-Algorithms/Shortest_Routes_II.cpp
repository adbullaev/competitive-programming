/*
 Problem: CSES - Shortest Routes II
 Link: https://cses.fi/problemset/task/1672

 Core Idea:
   The problem requires finding the shortest path between multiple pairs of vertices in a weighted, undirected graph.
   Since we need to answer multiple queries for any pair of vertices, we use the Floyd-Warshall algorithm.
   
   1. Initialize a 2D distance matrix `dist` with infinity (`INF`), and `dist[i][i] = 0` for all vertices.
   2. Read the edges and handle multiple edges between the same pair of vertices by keeping only the minimum weight.
   3. Run 3 nested loops where `k` acts as an intermediate vertex to relax the paths between `i` and `j`:
      dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
   4. Answer each query in O(1) time. If `dist[a][b]` remains `INF`, it means the vertices are disconnected, so we output -1.

 Complexity Analysis:
   - Time Complexity: O(N^3 + M + Q) — 
     * O(M) for graph initialization and reading edges.
     * O(N^3) for the three nested loops of the Floyd-Warshall algorithm.
     * O(Q) to process and answer all queries.
     Given N <= 500, N^3 is 1.25 * 10^8 operations, which easily passes within the time limit.

   - Space Complexity: O(N^2) — 
     * Required for the 2D `dist` matrix of size (N+1) x (N+1) to store the shortest distances between all pairs.
*/
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m,q;
    cin >> n >> m >> q;

   
    vector<vector<long long>> dist(n+1,vector<long long> (n+1,INF));

    for(long long i = 0;i<m;i++)
    {   
        long long a,b,c;

        cin >>a >>b >>c;
        if(dist[a][b] > c)
        {
            dist[a][b] = c;
            dist[b][a] = c;
        }
        
    }   

    for(long long i = 1;i<=n;i++)
    {
        dist[i][i] = 0;
    }
    for(long long k = 1;k<=n;++k)
    {
        for(long long i = 1;i<=n;++i)
        {
            for(long long j = 1;j<=n;++j)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]); 
                }
            }
        }
    }

    for(long long i = 0;i<q;i++)
    {
        long long a,b;
        cin >> a>> b;

        if(dist[a][b] == INF)
        {
            cout << "-1\n";
        }
        else cout << dist[a][b] << "\n";
    }

    
    



}