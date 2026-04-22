#include <bits/stdc++.h>
using namespace std;
const long long maxn = 100000;
long long n,m;
long long op_type;
long long op_value1,op_value2;

vector<long long> a(maxn);
vector<long long> T(4 * maxn);

void build(long long v,long long l, long long r)
{
    if(r-l == 1)
    {
        T[v]=a[l];
        return;
    }
    long long mid = (l+r)/2;
    build(2*v+1,l,mid);
    build(2*v+2,mid,r);
    T[v] = min(T[2*v+1],T[2*v+2]);
}

void st(long long pos,long long val,long long v,long long l,long long r)
{
    if(r-l==1)
    {
        T[v] = val;
        return;
    }
    long long mid = (l+r)/2;
    if(pos<mid) st(pos,val,2*v+1,l,mid);
    else st(pos,val,2*v+2,mid,r);
    T[v] = min(T[2*v+1],T[2*v+2]);
}

long long minv(long long l,long long r,long long v,long long lv,long long rv)
{
    if(lv>=r || rv<=l) return LONG_LONG_MAX;
    if(lv>=l && rv <= r) return T[v];
    long long mid = (lv+rv)/2;
    return min(minv(l,r,2*v+1,lv,mid),minv(l,r,2*v+2,mid,rv));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i] = inp;
    }
    build(0,0,n);
    for(long long i = 0 ; i<m;i++)
    {
        cin >> op_type >> op_value1 >> op_value2;
        if(op_type == 1) st(op_value1,op_value2,0,0,n);
        if(op_type == 2) {
            long long output = minv(op_value1,op_value2,0,0,n);
            cout << output << "\n";
        }
    }
    
    

}