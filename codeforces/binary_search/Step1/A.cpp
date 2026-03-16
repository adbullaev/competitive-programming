#include <bits/stdc++.h>
using namespace std;

long long n,k;

bool find(vector<long long> &a , long long x)
{
    long long l = 0;
    long long r = (long long)a.size()- 1;

    
    while(r>=l)
    {
        long long mid = (l+r)/2;
        if(x == a[mid]) return true;
        if(x<a[mid]) r = mid-1;
        if(x>a[mid]) l = mid+1;
    }
    return false;

}



              
int main()
{

    scanf("%lld %lld",&n,&k);
    vector<long long> vec(n);

    for(long long i = 0 ; i<n;i++) 
    {
        long long inp;
        scanf("%lld",&inp);
        vec[i] = inp;
    }

    for(long long i = 0 ; i<k;i++) 
    {
        long long inp;
        scanf("%lld",&inp);
        if(find(vec,inp)) printf("YES\n");
        else printf("NO\n");

    }
}
