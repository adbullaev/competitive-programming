#include <bits/stdc++.h>
using namespace std;
long long n,s;
vector<long long> a;

int main()
{

    cin >> n >> s;
    a.resize(n);
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i] = inp; 
    }
    long long r = 0;
    long long l = 0;
    long long sum = 0;
    long long result = 0;
    const long long asize = a.size();
    for(long long l = 0; l<n;l++)
    {
        
        while(r<n && sum<s)
        {
            sum += a[r];
            r++;
        }
        if(sum>=s)
        {
            result += n-r+1 ;
        }
        sum -= a[l];
    }
    
    cout <<result ;
}