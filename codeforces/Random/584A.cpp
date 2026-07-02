#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;

    if(a == 1 && b==10)
    {
        cout << "-1\n";
        return 0;
    }
    else
    {
        cout << b ;
        a--;
        if(b == 10) a--; 
        for(long long i = 0;i<a;i++)
        {
            cout << "0";
        }
    }
}