#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll t,n;
bool ok;
int main()
{
    scanf("%lld",&t);

    while(t--)
    {
        ok = true;
        scanf("%lld",&n);
        vector<pair<ll,ll>> vec(n);
        for(ll i = 0;i<n;i++)
        {
            scanf("%lld",&vec[i].first);
            vec[i].second = i;
        }

        sort(vec.begin(),vec.end());

        for(ll i = 0; i<n; i++)
        {
            if(i%2 != (vec[i].second) % 2) ok = false;
        }
        if(ok) printf("YES\n");
        else printf("NO\n");

    }
}