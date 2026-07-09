#include <bits/stdc++.h>
using namespace std;

// firstly define variables
vector<vector<pair<long long,long long>>> graph; // adjacency list
priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
vector<long long> dist;// list of distances
vector<long long> parents;// list of parents;

long long s=1;// source
long long n=10;// number of nodes

const long long INF = 1e18;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    parents.assign(n+1,-1);
    dist.assign(n+1,INF);

    pq.push({0,s});
    parents[s] = 0;
    dist[s] = 0;
    while(!pq.empty())
    {
        pair<long long,long long> v = pq.top();
        pq.pop();

        if(dist[v.second] < v.first) continue;
        
        for(const auto& u : graph[v.second])
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


    
    

}