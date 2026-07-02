/*
📌 Problem: CSES - Labyrinth
🔗 Link: https://cses.fi/problemset/task/1193

💡 Core Idea:
   Treat the '.' characters as vertices of a graph and run a full BFS/DFS 
    to find the connected components. It's better to use iterative DFS 
    to avoid stack overflow due to deep recursion or BFS. We should capture 
    order of our steps. And find if there is a way from A to B

⏱️ Complexity Analysis:
   - Time Complexity: O(E+V) — where E- length of path and V is a number of dots we visited 
   - Space Complexity: O(N*M) — we save grid
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;

    cin >> n >> m;

    vector<string> grid(n);
    vector<vector<char>> parents(n,vector<char>(m,'0'));

    for(long long i = 0;i < n;i++)
    {
        cin >> grid[i];
    }

    queue<pair<long long,long long>> q;
    vector<char> path;
    long long len = 0;
    pair<long long , long long> pa;
    pair<long long , long long> pb;
    
    for(long long i = 0; i <n;i++)
    {
        for(long long j = 0;j<m;j++)
        {
            if(grid[i][j] == 'A') 
            {
                pa = {i,j};
                i = n;
                j = m;
            }
        }
    }

    q.push(pa);
    grid[pa.first][pa.second] = '#';
    bool is_path = false;

    while(!q.empty())
    {
        pair<long long,long long> v = q.front();
        q.pop();
        if(v.first > 0 && (grid[v.first-1][v.second] != '#'  ))// up
        {
            if(grid[v.first-1][v.second] == 'B') 
            {
                pb.first = v.first-1;
                pb.second = v.second;
                is_path = true;
                parents[v.first-1][v.second] = 'D';
                break;
            }
            q.push({v.first-1,v.second});
            grid[v.first-1][v.second] = '#';
            parents[v.first-1][v.second] = 'D';
          
        }

        if(v.first < n-1 && (grid[v.first+1][v.second] != '#'  )) // down
        {
            if(grid[v.first+1][v.second] == 'B') 
            {
                pb.first = v.first+1;
                pb.second = v.second;
                is_path = true;
                parents[v.first+1][v.second] = 'U';
                break;
            }
            q.push({v.first+1,v.second});
            grid[v.first+1][v.second] = '#';
            parents[v.first+1][v.second] = 'U';
            
        }

        if(v.second > 0 && (grid[v.first][v.second-1] != '#' )) // left
        {
            if(grid[v.first][v.second-1] == 'B' ) 
            {
                pb.first = v.first;
                pb.second = v.second-1;
                is_path = true;
                parents[v.first][v.second-1] = 'R';
                break;
            }
            q.push({v.first,v.second-1});
            grid[v.first][v.second-1] = '#';
            parents[v.first][v.second-1] = 'R';
            
        }

        if(v.second < m-1 && (grid[v.first][v.second+1] != '#' )) // right
        {
            if(grid[v.first][v.second+1] == 'B' ) 
            {
                pb.first = v.first;
                pb.second = v.second+1;
                is_path = true;
                parents[v.first][v.second+1] = 'L';
                break;
            }
            q.push({v.first,v.second+1});
            grid[v.first][v.second+1] = '#';
            parents[v.first][v.second+1] = 'L';
            
        }
    }
    if(is_path)
    {
        pair<long long,long long> v = {pb.first,pb.second};
        
        while(parents[v.first][v.second] != '0')
        {
            char move = parents[v.first][v.second];
            
           
            
            
            if(move == 'D')
            {
                v.first++;
                path.push_back('U'); 
            }
            else if(move == 'U') 
            {
                v.first--;
                path.push_back('D'); 
            } 
            else if(move == 'R') 
            {
                v.second++;
                path.push_back('L'); 
            } 
            else if(move == 'L') 
            {
                v.second--;
                path.push_back('R'); 
            }
        }

        cout << "YES" << "\n";
        len = path.size();
        cout << len << "\n";
        reverse(path.begin(),path.end());
        for(long long i = 0 ; i<len;i++)
        {
            cout << path[i];
        }
    }
    else cout << "NO" << "\n";
}