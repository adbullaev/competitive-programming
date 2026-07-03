/*
📌 Problem: CSES - Building Teams
🔗 Link: https://cses.fi/problemset/task/1668

💡 Core Idea:
    We need to count number of connected components.
    Divide each one to two teams by making childs team differ from his parents
    
    
⏱️ Complexity Analysis:
   - Time Complexity: O(N + M) — standard FUll-DFS
   - Space Complexity: O(N * M) — Adjacency list
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

    for(long long i = 0 ;i<m;i++)
    {
        long long u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<long long> visited(n+1);
    vector<long long> st;
    vector<long long> comands(n+1,-1);

    

    for(long long i = 1;i<=n;i++)
    {
        if(!visited[i])
        {
            st.push_back(i);
            visited[i] = true;
            comands[i] = 1;

            while(!st.empty())
            {
                long long v = st.back();
                st.pop_back();
                for(long long u : adj[v])
                {
                    
                    if(!visited[u])
                    {
                        visited[u] = true;
                        st.push_back(u);
                        
                        comands[u]=(comands[v]+1)%2;
                    }
                    else if(comands[u] == comands[v])
                    {
                        cout << "IMPOSSIBLE\n";
                        return 0;
                    }
                    
                }
            }
        }
        else continue;
     

    }

    for(long long i = 1; i<=n;i++)
    {
        
        cout << comands[i]+1 << " ";

    }

    
    
}