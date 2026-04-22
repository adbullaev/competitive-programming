#include <bits/stdc++.h>
using namespace std;

long long t;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie();

    cin >> t;
    vector<long long> vec;
    while(t--)
    {   
        for(long long i  = 0; i<7;i++)
        {
            long long inp;
            cin >> inp;
            vec.push_back(inp);
        }


        sort(vec.begin(),vec.end());

        long long ans = 0;

        for(long long i = 0; i<6;i++)
        {
            ans -=vec[i];
        }
        ans +=vec[6];
        cout << ans << "\n";
        vec.clear();
    }


    

}