#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18; 

long long n;
vector<vector<long long>> g;
vector<vector<long long>> dist;


int main()
{
    dist.resize(n+1,vector<long long>(n+1,INF));
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
                dist[i][j] = min(dist[i][j],(dist[i][k]+dist[k][j]));
            }
        }
    }

}