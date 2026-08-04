/*
 Problem: CSES - Removing Digits
 Link: https://cses.fi/problemset/task/1637
 Although the problem is listed in the Dynamic Programming section, 
 it can be solved using a greedy algorithm with O(NlogN) time and O(1) space complexity. 
 Selecting the largest digit at each step yields the optimal transition.
 A dynamic programming approach offers the same time complexity but requires O(N) additional space.
*/

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7; 

long long find_max(long long x)
{
    long long max_x = 0;
    while(x > 0)
    {
        max_x = max(max_x,x%10);
        x/=10; 
    }
    return max_x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;

    cin >> n;
    
    
    long long itterations = 0;
    while(n>0)
    {
       long long max_n = find_max(n);
       n-=max_n;
       itterations++; 
    }

    cout << itterations;


}