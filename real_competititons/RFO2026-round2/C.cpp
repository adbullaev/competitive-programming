#include <bits/stdc++.h>
using namespace std;
int t;
int n;
long long ans;
int main()
{
    scanf("%d",&t);
    for(int i = 0; i<t;i++)
    {
        scanf("%d",&n);
        ans = (n*(n-1))/2;
        printf("%lld\n",ans); 
    }
}