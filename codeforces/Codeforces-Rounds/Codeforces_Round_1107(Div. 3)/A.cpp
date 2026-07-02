/*
 Problem: Codeforces Round 1107 (Div. 3) - problem A
 Link: https://codeforces.com/contest/2241/problem/A

Core Idea:
   The operation allows us to divide X by any of its divisors Z to get a new X.
   Mathematically, this means we can transform X into any of its divisors. 
   If we can perform this operation any number of times, it implies that 
   if Y is a divisor of X, we can reach Y directly or through a chain of divisions.
   Therefore, the condition for "YES" is simply: is X divisible by Y (X % Y == 0)?

 Complexity Analysis:
   - Time Complexity: O(1) per test case — we only need one modulo operation.
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
        cin >> x >> y;

        if(x%y == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    

    
}