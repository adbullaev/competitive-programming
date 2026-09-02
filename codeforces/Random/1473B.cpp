#include <bits/stdc++.h>
using namespace std;



long long LCM(long long a,long long b)
{
    long long g = gcd(a,b);
    a = a/g;
    return a*b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long q;
    cin >> q;

    while(q--)
    {
        string a,b;
        cin >> a >> b;
        
        long long n_a = a.size();
        long long n_b = b.size();

        long long lcm = LCM(n_a,n_b);

        long long num_a = lcm/n_a;
        string new_a;
        new_a.reserve(n_a*num_a);
        for(long long i = 0;i<num_a;i++)
        {
            new_a += a;
        }

        long long num_b = lcm/n_b;
        string new_b;
        new_b.reserve(n_b*num_b);
        for(long long i = 0;i<num_b;i++)
        {
            new_b += b;
        }

        if(new_a == new_b)
        {
            cout << new_a << "\n";
        }
        else cout << "-1\n";

        
    }
}