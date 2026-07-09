/*
 Problem: CSES - Shortest Routes I
 Link: https://cses.fi/problemset/task/1671

 Core Idea:
   The problem requires finding the shortest path from a single source (city 1) 
   to all other cities in a directed graph with non-negative edge weights. 
   We can solve this directly using Dijkstra's algorithm accelerated with a min-priority queue.

 Complexity Analysis:
   - Time Complexity: O((V + E) * log V) — Each vertex is processed at most once because of the distance check optimization. 
     In the worst case, every edge is relaxed, inserting a new element into the priority queue which takes logarithmic time.
   - Space Complexity: O(V + E) — Required to store the graph using an adjacency list (`adj`), 
     the distance and parent tracking vectors (`dist`, `parents`), and the elements within the priority queue.
*/
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;

    vector<vector<pair<long long , long long>>> adj(n+1);

    for(long long i = 0;i<m;i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
    }

    // first-weight second- index
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    vector<long long> parents(n+1,-1);
    vector<long long> dist(n+1,INF);
    
    dist[1] = 0;
    parents[1] = 0;

    pq.push({0,1});

    while(!pq.empty())
    {
        pair<long long,long long> v = pq.top();
        pq.pop(); 
        if(dist[v.second] < v.first) continue;

        for(const auto &u : adj[v.second])
        {  
            long long to = u.first;
            long long w = u.second;

            if(dist[v.second] + w < dist[to])
            {
                dist[to] = dist[v.second] + w;
                parents[to] = v.second;
                pq.push({dist[to],to});
            }
        }
    }

    for(long long i = 1 ; i<=n;i++)
    {
        cout << dist[i] << " ";
    }



}