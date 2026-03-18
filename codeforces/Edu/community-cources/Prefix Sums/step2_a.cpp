#include <bits/stdc++.h>
using namespace std;

long long n;
long long q;
vector<long long> a;
vector<long long> prefix_sums; 
long long find_sums(long long l,long long r)
{
    return prefix_sums[r]-prefix_sums[l-1];
}
int main()
{
    scanf("%lld",&n);
    prefix_sums.resize(n+1,0);
    for(long long i = 0; i<n;i++)
    {
        long long m;
        scanf("%lld",&m);
        a.push_back(m);
    }
    scanf("%lld",&q);
    for(long long i = 1;i<=n;i++)
    {
        prefix_sums[i] = prefix_sums[i-1] + a[i-1];
    }
    for(long long i = 0; i<q ; i++)
    {
        long long L,R;
        scanf("%lld %lld",&L,&R);
        printf("%lld\n",find_sums(L,R));
    }

}