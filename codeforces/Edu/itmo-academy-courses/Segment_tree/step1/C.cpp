#include <bits/stdc++.h>
using namespace std;

struct node
{
    long long minim,counter;
};

const long long maxn = 100000;
vector<node> tree(4*maxn);
vector<long long> vec(maxn);



node comparator(node a,node b)
{
    if(a.minim > b.minim) return b;
    if(a.minim < b.minim) return a; 
    return {a.minim,a.counter+b.counter};
}

long long n,m;
long long operation_type;
long long op_first,op_second;

const node zero={INT_MAX,0};

void build(long long v,long long l,long long r)
{

    if(r-l == 1)
    {
        tree[v] = {vec[l],1};
        return;
    }
    long long mid = (l+r)/2;
    build(2*v+1,l,mid);
    build(2*v+2,mid,r);
    tree[v] = comparator(tree[2*v+1] , tree[2*v+2]);
}

void st(long long pos,long long val,long long v,long long l,long long r)
{
    if(r-l == 1)
    {
        tree[v] = {val,1};
        return;
    }
    long long mid = (l+r)/2;
    if(pos < mid)
    {
        st(pos,val,2*v+1,l,mid);
    }
    else
    {
        st(pos,val,2*v+2,mid,r);
    }
    tree[v] = comparator(tree[2*v+1] , tree[2*v+2]);
}

node calc(long long l,long long r, long long v, long long lv , long long rv)
{
    if(lv>=r || rv<=l)
    {
        return zero;
    }
    if(lv>=l && rv<=r)
    {
        return tree[v];
    }
    long long mid = (lv+rv)/2;
    
    return comparator(calc(l,r,v*2+1,lv,mid),calc(l,r,v*2+2,mid,rv));
}

int main()
{
    scanf("%lld %lld",&n,&m);
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        scanf("%lld",&inp);
        vec[i]=inp;
    }

    build(0,0,n);

    for(long long i=0;i<m;i++)
    {
        scanf("%lld %lld %lld",&operation_type,&op_first,&op_second);
        node res = calc(op_first,op_second,0,0,n);
        if(operation_type == 1) st(op_first,op_second,0,0,n);
        else if(operation_type == 2) printf("%lld %lld\n",res.minim,res.counter);
    }
}