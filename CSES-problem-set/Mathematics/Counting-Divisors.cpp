/*
 Problem: CSES - Counting Divisors
 Link: https://cses.fi/problemset/task/1713
 Editorial : https://usaco.guide/gold/divisibility#solution---counting-divisors
*/
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<long long> sieve(MAX+1,0);
    for(long long i = 2;i<=MAX;i++)
    {
        if(sieve[i] == 0) for(long long j = i;j<=MAX;j+=i)
        {
            sieve[j] = i;
        }
    }  

    long long n;
    cin >> n;
    
    for(long long i = 0;i<n;i++)
    {
        long long x;
        cin >> x;
        long long div_num = 1;
        while(x!=1)
        {
            long long prime = sieve[x];
            long long count = 0;
            while(x%prime == 0)
            {
                count++;
                x/=prime;
            }
            div_num *= count+1;
        }
        cout << div_num << "\n";
        
    }

}