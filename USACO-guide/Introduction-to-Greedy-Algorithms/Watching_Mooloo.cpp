/*
 Problem:  - USACO 2023 February Contest, Bronze
             Problem 3. Watching Mooloo


 Link: https://usaco.org/index.php?page=viewproblem2&cpid=1301

Core Idea:
   if differnce between two neighbor numbers d1 , d2 is more than k 
   then we use d1+k , d2+k 

   else d1 + d2 + ... dn + k

 Complexity Analysis:
   - Time Complexity: O(n) — Greedy algorithm 
   - Space Complexity: O(n) — array d
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    

    long long n , k;
    cin >> n >> k;


    vector<long long> d;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        d.push_back(inp);
    }

    long long cnt = 0;
    long long substr_sum = 0;

    cnt += 1+k;

    for(long long i = 1;i<n;i++)
    {
        long long extending = d[i]-d[i-1];
        long long new_subscript = 1+k;

        cnt += min(extending,new_subscript);
    }
    
    cout << cnt << "\n";
    
}