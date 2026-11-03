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
        long long result = 0 ;
        for(long long i  = 0;i<n;i++)
        {
            long long a , b;
            cin >> a >> b;

            if(b<a) result++;
        }

        cout << result << "\n"; 
        
    }

}