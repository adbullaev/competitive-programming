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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,x; // n - size of array , x - element we need to find
    cin >> n >> x;
    vector<long long> vec(n+2);
 
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        vec.push_back(inp);
    }

    sort(vec.begin(), vec.end());

    long long pos = find_lower(vec,x); // egual to lower_bound(vec.begin(),vec.end()) - a.begin();

    cout << pos+1 << "\n";
    

}