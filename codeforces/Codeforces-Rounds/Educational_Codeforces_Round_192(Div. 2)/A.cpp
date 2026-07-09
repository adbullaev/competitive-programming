/*
 Problem: CSES - [Problem Name]
 Link: [URL to the problem]

Core Idea:
   [1-2 sentences explaining your approach/strategy without excessive text]

 Complexity Analysis:
   - Time Complexity: O(...) — [Brief justification, e.g., visiting each vertex once]
   - Space Complexity: O(...) — [Brief justification, e.g., adjacency list and visited array]
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long k;
        cin >> k;

        long long two = 0;
        long long three = 0;

        for(long long i = 0;i<k;i++)
        {   
            long long inp;
            cin >> inp;

            if(inp >= 3) three++;
            else if(inp == 2) two++;
        }

        if(three >= 1) cout << "YES\n";
        else if (two >= 2) cout << "YES\n";
        else cout << "NO\n";
    }


    
}