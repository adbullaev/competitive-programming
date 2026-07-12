#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18; 



struct Edge
{
    long long from,to,cost;
};

long long main()
{
    
    long long n,source;
    vector<Edge> edges;
    
    vector<long long> dist(n+1,INF);
    dist[source] = 0;
    for(long long i = 1;i<n;i++ )
    {
        for(Edge e : edges)
        {
            if(dist[e.from] < INF)
            {
                dist[e.to] = min(dist[e.to],dist[e.from]+e.cost);
            }
        }
    }
}   