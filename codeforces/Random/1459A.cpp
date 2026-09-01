#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        string a,b;
        cin >> a >> b;
        long long sum_a = 0;
        long long sum_b = 0;
        for(long long i = 0;i<n;i++)
        {
            if((int)a[i] > (int)b[i])
            {
                sum_a++;
            }
            else if((int)a[i] < (int)b[i])
            {
                sum_b++;
            }
            else if((int)a[i] == (int)b[i])
            {
                sum_a++;
                sum_b++;
            }
        }   

        if(sum_b == sum_a) cout << "EQUAL\n";
        else if(sum_b>sum_a) cout << "BLUE\n";
        else if(sum_b<sum_a) cout << "RED\n";

    }
}