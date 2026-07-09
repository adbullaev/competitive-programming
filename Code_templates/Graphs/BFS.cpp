#include <bits/stdc++.h>
using namespace std;

// firstly define variables
vector<vector<long long>> graph; // adjacency list
queue<long long> q;
vector<long long> dist;// list of distances
vector<long long> parents;// list of parents;
vector<long long> used;// lost of parents;
long long s=1;// source
long long n=10;// number of nodes

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    q.push(s);
    parents[s] = -1;
    used[s] = true;
    
    while(!q.empty())
    {
        long long vertex = q.front(); 
        q.pop();

        for(long long u : graph[vertex])
        {
            if(!used[u])
            {
                used[u] = true;
                q.push(u);
                dist[u] = dist[vertex]+1;
                parents[u] = vertex;
            }
        }
    }

}