#include <bits/stdc++.h>
using namespace std;

long long t;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--)
    {

        long long n;
        long long result = 0;
        pair<long long,long long> maxv = {0,0}; 
        // first - number ; second - position
        vector<long long> a;
        cin >> n;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp);
            if(maxv.first < inp)
            {
                maxv.first = inp;
                maxv.second = i;
            }
        }
        
        if(maxv.second == 0) a[0] = a[1];
        else a[maxv.second] = a[maxv.second-1];

        for(long long i = 1;i<n;i++)
        {
            result += max(a[i],a[i-1]) - min(a[i],a[i-1]);
        }

        cout << result << "\n";

    }

}