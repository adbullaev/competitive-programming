/*
📌 Problem: CSES - Counting Rooms
🔗 Link: https://cses.fi/problemset/task/1192

💡 Core Idea:
    Treat the '.' characters as vertices of a graph and run a full BFS/DFS 
    to find the connected components. It's better to use iterative DFS 
    to avoid stack overflow due to deep recursion or BFS.
    
⏱️ Complexity Analysis:
   - Time Complexity: O(N * M) — Reading the grid takes O(N * M) time. 
     The iterative DFS or BFS visits each cell and its 4 neighbors at most once, 
     leading to O(N * M) total time for finding components.
   - Space Complexity: O(N * M) — For storing the map, the visited array, 
     and the explicit stack used in the iterative DFS or BFS.
*/
#include <bits/stdc++.h>
using namespace std;

long long n,m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<string> map(n+1);
    for(long long i = 0;i<n;i++)
    {
        cin >> map[i];
    }
    /*string s(m,'#');
    map.push_back(s);*/

    queue<pair<long long,long long>> q;
    long long ans = 0;
    for(long long i = 0;i<n;i++)
    {
        for(long long j=0;j<m;j++)
        {
            if(map[i][j] == '.')
            {   
                ans++;
                map[i][j] = '#';
                q.push({i,j});
               
                while(!q.empty())
                {
                    pair<long long,long long> v = q.front();
                    q.pop();
                    // up
                    if(v.first>0 && map[v.first-1][v.second]=='.' )
                    {
                        q.push({v.first-1,v.second} );
                        map[v.first-1][v.second]='#';
                    }
                    // down
                    if(v.first+1<n && map[v.first+1][v.second]=='.' )
                    {
                        q.push({v.first+1,v.second});
                        map[v.first+1][v.second]='#';
                    }
                    // left
                    if(v.second>0 && map[v.first][v.second-1]=='.' )
                    {
                        q.push({v.first,v.second-1});
                        map[v.first][v.second-1]='#';
                    }
                    //right
                    if(v.second+1<m && map[v.first][v.second+1]=='.' )
                    {
                        q.push({v.first,v.second+1});
                        map[v.first][v.second+1]='#';
                    }
                    
                }
                

                

            }
        }
    }
    
    cout << ans << "\n";
    
}