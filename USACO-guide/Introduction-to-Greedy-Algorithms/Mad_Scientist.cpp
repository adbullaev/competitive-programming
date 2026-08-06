/*
 Problem:  - USACO 2020 February Contest, Bronze
             Problem 2. Mad Scientist

 Link: https://usaco.org/index.php?page=viewproblem2&cpid=1012

Core Idea:
   We should fing number of different substrings

 Complexity Analysis:
   - Time Complexity: O(n) — Greedy algorithm 
   - Space Complexity: O(n) — A&B strings
*/
#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    
    // If a problem name is provided, redirect stdin and stdout to files
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    setIO("breedflip");

    long long n ;
    cin >> n;
    string A,B;

    cin >> A >> B;
    long long cnt = 0;
    for(long long i = 0;i<n;i++)
    {
        if(A[i]!=B[i] && (A[i+1] == B[i+1] && i < n+1) )
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    
}