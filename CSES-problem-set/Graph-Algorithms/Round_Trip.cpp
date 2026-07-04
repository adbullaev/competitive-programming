/*
📌 Problem: CSES - Round Trip
🔗 Link: https://cses.fi/problemset/task/1669

💡 Core Idea: We use DFS to find cycles  
    then we check if size of at least one cycle is more or equal to 4 
    with one vertice repeated. 
    
    
    
⏱️ Complexity Analysis:
   - Time Complexity: O(N+M) - Standart time for Full-DFS algorithm
   - Space Complexity: O(N+M) - we story te graph as an Adjacency list
*/
#include <bits/stdc++.h>
using namespace std;

vector<long long> parents;
vector<bool> visited;
vector<long long> path;
vector<vector<long long>> adj;
vector<long long> cycle;

bool dfs(long long v , long long p)
{
    visited[v] = 1; 
    parents[v] = p;
    for(long long u:adj[v])
    {   
        if(u == p) continue;

        if(visited[u])
        {

            cycle.push_back(u);
            long long cur = v;
            while(cur != u)
            {
                cycle.push_back(cur);
                cur = parents[cur];
            }
            cycle.push_back(u);
            return true;
        }
        else 
        {
            if(dfs(u,v)) return true;
        }
    }    
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;

    cin >> n>> m;
    parents.resize(n+1,-1);
    visited.resize(n+1,0);
    adj.resize(n+1);
    

    for(long long i = 0;i<m;i++)
    {
        long long u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(long long i = 1;i<=n;i++)
    {
        if(!visited[i])
        {
           dfs(i,-1);
           if(cycle.size()>=4)
           {
                cout << cycle.size() << "\n";
                for(long long i = 0;i<cycle.size();i++)
                {
                    cout << cycle[i] << " ";
                }
                return 0;
           } 
        }
    }

    cout << "IMPOSSIBLE\n";
    





}