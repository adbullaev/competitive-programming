#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0); 

    long long n,x,y;
    cin >> n >> x >> y;
    n--;

    long long a = min(x,y);
   

    long long l = 0;
    long long r =  2e11;

    if(n == 0)
    {
        cout << a << "\n";
        return 0;
    }
    while(r>l+1)
    {
        long long m = l + (r-l)/2;
        long long s = (m/x) + (m/y);
        if(s >= n)
        {
            r=m;
        }
        else l = m;
    }

    cout << a+r << "\n";

    

}