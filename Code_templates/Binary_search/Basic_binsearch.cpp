#include <bits/stdc++.h>
using namespace std;
/* classic but not the best
long long find(vector<long long> &arr , long long x)
{
    long long l,r,m;
    l = 0;
    r = arr.size()-1;
    

    while(r >= l)
    {
        m = (l+r)/2;

        if(arr[m] < x)
        {
            l = m+1;
        }
        else if(arr[m] > x)
        {
            r = m-1;
        }
        else if(arr[m] == x)
        {
            return m;
        }
    }

    return -1;
}
*/

// better implementation
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

long long find(vector<long long> &arr , long long x)
{
    long long i = find_lower(arr,x);
    return i >= 0 && arr[i] == x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,x; // n - size of array , x - element we need to find
    cin >> n >> x;
    vector<long long> vec;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    long long pos = find(vec,x);
    if(pos == -1) cout << "no x in array :( \n" ;
    else cout << pos ;
    

}