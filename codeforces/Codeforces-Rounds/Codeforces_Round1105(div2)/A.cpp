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

        long long n,k;

        cin >> n >> k;
        if(n==1||n==2) 
        {
            cout << "1" << "\n";
            return 0;
        }
        long long res = n/k;
        long long deg = 1;
        long long num = 2;
        while(num<=res)
        {
            num*=2;
            deg++;
            if(num+1>res) break;
        }

        

        



    }


}