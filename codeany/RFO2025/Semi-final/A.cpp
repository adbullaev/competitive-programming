#include <bits/stdc++.h>
using namespace std;
long long t;
long long ss,dd;
long long ss_new,dd_new;
long long t_change;
int main()
{
    scanf("%lld",&t);

    for(long long i=0;i<t;i++)
    {
        scanf("%lld:%lld %lld",&ss,&dd,&t_change);
        ss_new = (ss+(dd+t_change)/60)%24;
        dd_new = (dd+t_change)%60;
        if(ss_new<10 && dd_new<10) printf("0%lld:0%lld\n",ss_new,dd_new);
        if(ss_new<10 && dd_new>=10) printf("0%lld:%lld\n",ss_new,dd_new);
        if(ss_new>=10 && dd_new>=10) printf("%lld:%lld\n",ss_new,dd_new);
        if(ss_new>=10 && dd_new<10) printf("%lld:0%lld\n",ss_new,dd_new);
        
    }
}