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

        vector<long long> vec;
        for(long long i= 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            vec.push_back(inp);
        }

        bool possible = false;

        for(long long i=1;i<n;i++)
        {
            if(vec[i-1]<=vec[i])
            {
                possible = true;
            }
        }

        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }

}