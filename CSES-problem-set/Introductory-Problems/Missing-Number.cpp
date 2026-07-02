#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector<bool> vec(n+1,0);
    vec[0] = 1;
    for(long long i = 1;i<n;i++ )
    {
        long long inp;
        cin >> inp;
        vec[inp] = 1;
    }

    for(long long i = 1;i<=n;i++)
    {
        if(vec[i] == 0)
        {
            cout << i;
            return 0;
        }
    }
    

}