#include <bits/stdc++.h>
using namespace std;

long long find_lower(vector<long long> &arr , long long x) // max(i) : a[i] <=x 
{
    long long l,r,m;
    l = -1; //a[l] <=x
    r = arr.size(); // a[r] > x
    
    while(r > l+1)
    {
        m = (l+r)/2; // m >l , m < r ; l<m<r

        if(arr[m] <= x)
        {
            l = m;
        }
        else 
        {
            r = m;
        }
    }

    return l;
}

long long find_upper(vector<long long> &arr , long long x) // min(i) : a[i] >= x 
{
    long long l,r,m;
    l = -1; //a[l] < x
    r = arr.size(); // a[r] >= x
    
    while(r > l+1)
    {
        m = (l+r)/2; // m > l , m < r ; l < m < r

        if(arr[m] < x)
        {
            l = m;
        }
        else 
        {
            r = m;
        }
    }

    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<long long> vec(n);
    
    for(long long i = 0;i<n;i++)cin >> vec[i];
    sort(vec.begin(),vec.end());
    long long k;
    cin >> k;
    while(k--)
    {
        long long l,r;
        cin >> l >> r;

        cout << (find_upper(vec,r+1) ) - (find_upper(vec,l) )<< "\n";
    }
}