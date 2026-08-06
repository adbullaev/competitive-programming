/*
 Problem:  - USACO 2017 January Contest, Bronze
             Problem 3. Cow Tipping


 Link: https://usaco.org/index.php?page=viewproblem2&cpid=689

Core Idea:
   while fliping rectangle ij we also flip every ractangle smaler thamn it so start from the bottom and we're going up-left


 Complexity Analysis:
   - Time Complexity: O(n^2) — Greedy algorithm 
   - Space Complexity: O(n^2) — grid
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("cowtip.in","r",stdin);
    freopen("cowtip.out","w",stdout);

    long long n;
    cin >> n;
    
    vector<vector<char>> grid(n+1,vector<char> (n+1,'0'));
    for(long long i = 1;i<=n;i++)
    {
        string s;
        cin >> s;
        for(long long j = 1;j<=n;j++)
        {
            
            if(s[j-1] == '1')
            {
                grid[i][j] = '1';
            }
        }
    }

    long long cnt = 0;

    for(long long i = n;i>=1;i--)
    {
        for(long long j = n;j>=1;j--)
        {
            if(grid[i][j] == '1')
            {
                cnt++;

                for(long long a = i;a>=1;a--)
                {
                    for(long long b = j;b>=1;b--)
                    {
                        if(grid[a][b] == '1') grid[a][b] = '0';
                        else if(grid[a][b] == '0') grid[a][b] = '1';
                    }
                }
            }
        }
    }

    cout << cnt << "\n";
    
}