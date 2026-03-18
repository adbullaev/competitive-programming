#include <bits/stdc++.h>
using namespace std;
long long n;
vector<long long> vec;

int main()
{
    scanf("%lld",&n);
    vector<long long> prefix_sums(n+1,0);
    for(long long i = 0; i<n;i++)
    {
        long long m;
        scanf("%lld",&m);
        vec.push_back(m);
    }

    for(long long i =1 ; i<=n;i++)
    {
        prefix_sums[i] = prefix_sums[i-1] + vec[i-1];
    }
    
    for(long long i = 0;i<=n;i++)
    {
        printf("%lld ",prefix_sums[i]);
    }

}