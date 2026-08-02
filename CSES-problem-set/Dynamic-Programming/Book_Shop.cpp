/*
 Problem: CSES - Book Shop
 Link: https://cses.fi/problemset/task/1158
 Editorial : media\CSES-Book_Shop.md
 * as we use only old and new states for dp[i][w] & dp[i-1][w] we can just use only dp[w]; 
*/
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,x;

    cin >> n >> x;
    
    vector<long long> h;
    vector<long long> s;

    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        h.push_back(inp);
    }
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        s.push_back(inp);
    }

    vector<long long> dp(x+1,0);
    
    for(long long i = 0;i<n;i++)
    {
        for(long long j = x;j>=h[i];j--)
        {
            dp[j] = max(dp[j],dp[j-h[i]]+s[i]); 
        }
    }

    cout << dp[x];



}
