#include <bits/stdc++.h>
using namespace std;

long long t;
long long n,m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--)
    {

        cin >> n >> m;
     
        set<pair<long long,long long>> graph;

        long long v,to;
        long long correct = 1;
        for(long long i = 0;i<m;i++)
        {
            cin>> v >> to;
            if(v == to) 
            {
                correct = 0;
                
            }
            long long minv = min(v,to);
            long long maxv = max(v,to);

            if(graph.count({minv,maxv}))
            {
                correct = 0;
                
            } else {
                graph.insert({minv,maxv});
            }

        }

        if(correct) cout << "YES" << "\n";
        else cout << "NO" << "\n";

       
        
    }

}