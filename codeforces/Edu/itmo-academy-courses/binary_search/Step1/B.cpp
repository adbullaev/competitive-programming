#include <bits/stdc++.h>
using namespace std;
long long n,k;


bool find(vector<long long> &vec , long long k)
{

    long long l = 0;
    long long r = (long long)vec.size() + 1;

    while(r<=l)
    {
        long long mid = (r+l)/2;
        if(vec[mid] == k) return true;
        if(vec[mid]< k) l = mid + 1;
        if(vec[mid] > k) r = mid - 1;
        

    }
    return false;
}

long long find_lower(vector<long long> &a , long long x)
{
    long long l = -1;
    long long r = (long long)a.size();

    while(r > l+1)
    {
        long long mid = (l+r)/2;
        if(x>=a[mid]) l = mid;
        else r = mid;
    }
    return l;
}

int main()
{

    scanf("%lld %lld",&n,&k);
    vector<long long> vec(n);
    for(long long i = 0;i<n;i++) cin >> vec[i];
    for(long long i = 0;i<k;i++)
    {
        long long inp;
        cin >> inp;
        cout << find_lower(vec,inp) +1 << endl;
    }
}