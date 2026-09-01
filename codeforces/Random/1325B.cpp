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

        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            vec.push_back(inp);
        }

        sort(vec.begin(),vec.end());

        auto last = unique(vec.begin(),vec.end());
        vec.erase(last,vec.end());

        cout << vec.size() << "\n";

    }

}