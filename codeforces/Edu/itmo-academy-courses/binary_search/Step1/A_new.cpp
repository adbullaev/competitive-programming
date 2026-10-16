#include <bits/stdc++.h>
using namespace std;

long long find_lower(vector<long long> &arr , long long x)
{
    long long l,r,m;
    l = -1;
    r = arr.size();

    while(r>l+1)
    {
        m = (l+r)/2;
        if(arr[m] <= x)
        {
            l = m;
        } else {
            r = m;
        } 
    }

    return l;
}

bool find(vector<long long> &arr , long long x)
{
    long long i = find_lower(arr,x);
    return i>=0 && arr[i] == x;
}

int main()
{

    long long n,k;
    cin >> n >> k;
    vector<long long> vec(n);
    for(long long i =0 ;i<n;i++) cin >> vec[i];

    while(k--)
    {
        long long x;
        cin >> x;

        cout << (find(vec,x) ? "YES" : "NO") << "\n";
    }
    
}