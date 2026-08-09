/*
 Problem:  - USACO 2021 January Contest, Bronze
             Problem 2. Even More Odd Photos


 Link: https://usaco.org/index.php?page=viewproblem2&cpid=1084
   

 Complexity Analysis:
   - Time Complexity: O(n) — Greedy algorithm 
   - Space Complexity: O(n) — array with IDs of cows
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    

    long long n;
    cin >> n;

    
    long long even = 0;
    long long odd = 0;

    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        if(inp % 2 == 0)
        {
            even++;
        }
        else odd++;
    }
    
    
    while(odd>even)
    {
        odd-= 2;
        even++;
    }
    
    if(even>odd+1)
    {
        even = odd +1;
    }
    
    cout << even + odd << "\n";
    return 0;
    
    
}