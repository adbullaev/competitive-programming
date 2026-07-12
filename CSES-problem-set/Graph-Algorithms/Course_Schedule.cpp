/*
 Problem: CSES - Course Schedule
 Link: https://cses.fi/problemset/task/1679/

 Core Idea:
   The problem asks us to find a valid order to take courses given their prerequisites, which is a classic Topological Sort.
   We use Depth First Search (DFS) with a 3-color marking system to detect cycles (impossible schedules) and build the order in reverse.

 Complexity Analysis:
   - Time Complexity: O(V + E) — We perform a standard DFS traversal where each vertex (course) and edge (prerequisite) is visited exactly once.
   - Space Complexity: O(V + E) — Required for the adjacency list `adj` to store the graph, the `colors` array for cycle detection, and the stack `st` to hold the topological order.
*/
#include <bits/stdc++.h>
using namespace std;

vector<long long> colors;
vector<long long> st;
vector<vector<long long>> adj;
bool is_cycle = false;
void dfs(long long v)
{
    colors[v] = 1;
    for(long long u : adj[v])
    {
        if(colors[u] == 1) is_cycle = true ;
        else if ( colors[u] != 2)
        {
            dfs(u);
        }
    }
    colors[v] = 2;
    st.push_back(v);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;

    adj.resize(n+1);

    for(long long i = 0;i<m;i++)
    {
        long long a,b;
        cin >> a>> b;
        adj[a].push_back(b);
    }

    colors.resize(n+1,0);

    for(long long i = 1;i<=n;i++)
    {
        if(colors[i] == 0)
        {
            dfs(i);
        }
    }

    if(!is_cycle)
    {
        reverse(st.begin(),st.end());
        for(long long i = 0;i<st.size();i++ )
        {
            cout << st[i] << " ";
        }
    }
    else 
    {
        cout << "IMPOSSIBLE\n";
    }
    

    
    
}