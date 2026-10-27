#include <bits/stdc++.h>
using namespace std;

long long find_upper(vector<long long> &arr , long long x)
{
    long long l,r,m;
    l = -1;
    r = arr.size();

    while(r > l +1)
    {
        m = (r+l)/2;

        if(arr[m] < x)
        {
            l = m;
        } else {
            r = m;
        }
    }

    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n,k;
    cin >> n >> k;

    vector<long long> vec(n);
    for(long long i = 0;i<n;i++) cin >> vec[i];

    while(k--)
    {
        long long x;
        cin >> x;

        cout << find_upper(vec,x) +1 << "\n";
    }

}
