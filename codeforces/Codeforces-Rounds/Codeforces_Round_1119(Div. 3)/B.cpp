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
        vector<long long> odds;
        vector<long long> evenly_evens;
        vector<long long> evenly_odds;

        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            if(inp % 2 == 0)
            {
                if((inp%4)== 0) evenly_evens.push_back(inp);
                else evenly_odds.push_back(inp);
            }
            else odds.push_back(inp);
        }

        cout << max(odds.size(),max(evenly_evens.size(),evenly_odds.size())) << "\n";
    }

}