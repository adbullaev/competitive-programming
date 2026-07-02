/*
 Problem: Codeforces Round 1107 (Div. 3) - problem C
 Link: https://codeforces.com/contest/2241/problem/C

 Core Idea:
   Read editorial for the problem 

 Complexity Analysis:
   - Time Complexity: O(N) — we're going through the lits and count number of pairs s[i]!=s[i+1]
   - Space Complexity: O(1) — no additional data structures required.
 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    long long x,y;
    cin >> t;
    while(t--)
    {
        long long n;
        string s;

        cin >> n;
        cin >> s;
        long long c = 0;

        for(long long i = 0;i<n;i++)
        {
            if(s[i] != s[i+1]) c++;
        }
        if(c == 2)
        {
            cout << 2 << "\n";
        }
        else cout << 1 << "\n";
    }
    

    
}