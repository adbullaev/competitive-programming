/*
 Problem: Codeforces Round 1107 (Div. 3) - problem D
 Link: https://codeforces.com/contest/2241/problem/D

Core Idea:
   Read editorial

 Complexity Analysis:
   - Time Complexity: O(n) per test case — we need to count prefix sums for a and b and then compare elements
   - Space Complexity: O(n) — we need prefix sums 
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
        long long n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        vector<long long> pa(n,0);
        vector<long long> pb(n,0);

        for(long long i = 0;i<n;i++)
        {
            cin >> a[i];
        }
        for(long long i = 0;i<n;i++)
        {
            cin >> b[i];
        }
        pa[0] = a[0];
        for(long long i = 1;i<n;i++)
        {
            pa[i] = pa[i-1]+a[i];
        }
        pb[0] = b[0];
        for(long long i = 1;i<n;i++)
        {
            pb[i] = pb[i-1]+b[i];
        }
        long long ans=0;
        for(long long i = 0;i<n;i++)
        {
            if(pa[i] <= pb[i]) ans++; 
        }

        if(ans == n) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        

    }


}