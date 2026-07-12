/*
📌 Problem: CSES - Cycle Finding
🔗 Link: https://cses.fi/problemset/task/1197

💡 Core Idea: 

   
⏱️ Complexity Analysis:
   - Time Complexity: O(N * M) - 
   - Space Complexity: O(N + M) - 
*/
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

struct Edge
{
    long long from,to,cost;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;

    cin >>n >>m ;

    vector<Edge> edges;
    vector<long long> dist(n+1,0);
    vector<long long> parents(n+1,-1);
    for(long long i =0; i<m ; i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        edges.push_back({a,b,c});
    }
    
    for(long long i = 1;i<n;i++)
    {
        for(Edge e: edges)
        {
            
            
                if(dist[e.to] > dist[e.from] + e.cost)
                {
                    dist[e.to] = dist[e.from] + e.cost;
                    parents[e.to] = e.from;
                }
            
        }
    }

    long long target_vertex = -1;

    for(Edge e: edges)
    {
       
        
            if(dist[e.to] > dist[e.from] + e.cost)
            {
                dist[e.to] = dist[e.from] + e.cost;
                parents[e.to] = e.from;
                target_vertex = e.to;
                break;
            }
        
    }

    if(target_vertex == -1) cout << "NO";
    else
    {
        for(long long i = 0;i<n;i++)
        {
            target_vertex = parents[target_vertex];
        }

        vector<bool> visited(n+1,0);
        vector<long long> result;
        while(visited[target_vertex] != true)
        {
            visited[target_vertex] = true;
            result.push_back(target_vertex);
            target_vertex = parents[target_vertex];
        }
        cout <<"YES\n";
        result.push_back(target_vertex);
        reverse(result.begin(),result.end());
        for(long long i = 0;i<result.size();i++)
        {
            cout << result[i] << " "; 
        }
        

    }
}