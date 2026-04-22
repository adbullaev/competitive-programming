#include <bits/stdc++.h>
using namespace std;

struct node
{
    long long value;
    long long quantity;
};

const long long maxn = 100000;
long long n,m;
long long op_type;
long long op_value1,op_value2;

node merge(node a, node b) {
    if (a.value < b.value) return a;
    if (b.value < a.value) return b;
    
    return {a.value, a.quantity + b.quantity};
}


vector<node> a(maxn);
vector<node> T(4*maxn);
void build(long long v,long long l,long long r)
{
    if(r-l==1)
    {
        T[v]=a[l];
        return;
    }
    long long mid = (l+r)/2;
    build(2*v+1,l,mid);
    build(2*v+2,mid,r);
    T[v] = merge(T[2*v+1],T[2*v+2]);
}      

void st(long long pos, long long val,long long v,long long l,long long r)
{
    if(r-l == 1)
    {
        T[v].value = val;
        T[v].quantity = 1;
        return;
    }
    long long mid = (r+l)/2;
    if(pos<mid) st(pos,val,2*v+1,l,mid);
    else st(pos,val,2*v+2,mid,r);
    T[v] = merge(T[2*v+1],T[2*v+2]);
}

node minv(long long l,long long r,long long v,long long lv,long long rv)
{
    if(lv>=r || rv<=l) return {LONG_LONG_MAX,0};
    if(lv>=l && rv<=r) return {T[v].value,T[v].quantity};
    long long mid = (lv+rv)/2;
    return merge(minv(l,r,2*v+1,lv,mid),minv(l,r,2*v+2,mid,rv));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(long long i = 0; i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i].value = inp;
        a[i].quantity = 1;
    }

    build(0,0,n);
    for(long long i = 0; i<m;i++)
    {
        cin >> op_type >> op_value1 >> op_value2;
        if(op_type == 1) st(op_value1,op_value2,0,0,n);
        if(op_type == 2) 
        {
            node out = minv(op_value1,op_value2,0,0,n);
            cout << out.value << " " << out.quantity << "\n";
        }
    }


}