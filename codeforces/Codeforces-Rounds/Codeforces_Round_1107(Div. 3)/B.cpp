/*
 Problem: Codeforces Round 1107 (Div. 3) - problem B
 Link: https://codeforces.com/contest/2241/problem/B

 Core Idea:
   We count number of digits in X --D  
   then we can create Y just by making 10^D + 1
   Cause every number by multiplying to 10 just get one more zero at right side
   and when we add enough zeroes we can reply number it self. So 
 Complexity Analysis:
   - Time Complexity: O(log10(N)) — we count number of edges by dividing to 10 
   - Space Complexity: O(1) — just need to safe input
 Additional notes:
   - Firstly i thought about multiplying by 10 but then i understand 
   that we just add new numbers and i rejected this idea .But it turned that
   i was thinking in right direction
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;

    long long x;

    while(t--)
    {
        cin >> x;
        long long d = 10;
        while(x/10 > 0)
        {
            d *= 10;
            x/=10;
        }
        d++;
        cout << d << "\n";
    }
}