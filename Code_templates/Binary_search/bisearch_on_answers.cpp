#include <bits/stdc++.h>
using namespace std;



bool f(long long x) // let's take 179 as example
{
    if(x < 179) return 0;
    else return 1;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long l = 0;
    long long r = 1e17;
    
    while(r>l+1)
    {
        long long m = (l+r)/2;

        if(f(m) == 1) // 
        {
            r = m;
        }
        else 
        {
            l = m;
        }
    }

    cout << r << "\n"; 

}