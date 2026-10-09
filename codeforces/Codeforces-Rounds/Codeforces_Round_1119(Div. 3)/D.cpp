#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--)
    {
        
        long long n;
        cin >> n;

        vector<pair<long long,long long>> vec;
        long long cnt = 0;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            if(inp == 0) cnt++ ;
            vec.push_back({inp,0});
        }

        if(cnt != 1)
        {
            cout << "YES\n";

            if(cnt == 0)
            {
                for(long long i = 0;i<n-2;i++)
                {
                    cout << "A";
                }
                cout << "B";
                cout << "C";
                cout << "\n";
            }
            else
            {
                long long i = 0;

                while(i<n)
                {
                    cout <<"A";
                    if(vec[i].first == 0) break;
                    i++;
                }
                while(i<n)
                {
                    cout <<"B";
                    if(vec[i].first == 0) break;
                    i++;
                }
                while(i < n-2)
                {
                    cout << "C";
                    ++i;
                }
                cout << "\n";
            }
        }
        else 
        {
            cout << "NO\n";
        }

    }
    
}