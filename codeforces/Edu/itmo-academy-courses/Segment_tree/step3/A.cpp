#include <bits/stdc++.h>
using namespace std;
long long n;
vector<long long> T;
vector<long long> vec;
vector<long long> vecb;
vector<long long> vec_ans;
void build(long long v,long long l,long long r)
{
    if(r-l == 1)
    {
        T[v] = vecb[l];
        return;
    }
    long long mid = (l+r)/2;

    build(2*v +1,l,mid);
    build(2*v+2,mid,r);

    T[v]=T[2*v+1]+T[2*v+2];
}
void st(long long pos,long long val,long long v,long long l,long long r)
{
    if(r-l==1)
    {
        T[v] = val;
        return;
    }

    long long mid = (l+r)/2;

    if(pos<mid){
        st(pos,val,2*v+1,l,mid);
    } else {
        st(pos,val,2*v+2,mid,r);
    }

    T[v]= T[2*v+1]+T[2*v+2];

}

long long sum(long long l,long long r,long long v,long long lv,long long rv)
{
    if(lv>=r || l>=rv) return 0;
    if(lv<=l && r >= rv) return T[v];
    long long mid = (lv+rv)/2;
    return sum(l,r,2*v+1,lv,mid) + sum(l,r,2*v+2,mid,rv);
}

int main()
{
    scanf("%lld",&n);
    vec.resize(n,0);
    T.resize(4*(n+1),0);
    vecb.resize(n,0);
    vec_ans.resize(n,0);
    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&vec[i]);
    }
    build(0,0,n);
    for(long long i = 0;i<n;i++)
    {
        long long bigger = sum(vec[i]+1,n,0,0,n);
        st(vec[i],1,0,0,n);  
        vec_ans[vec[i]]= bigger;
    }
    for(long long i = 0; i<n;i++) printf("%lld ",vec_ans[i]);
}