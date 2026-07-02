#include <bits/stdc++.h>
using namespace std;

long long t;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while(t--)
    {   
        long long size;
        cin >> size;

        vector<long long> friends(size);

        for(long long i = 0; i<size; i++) {
            cin >> friends[i];
        }



        long long min_c = LLONG_MAX; 



        for(long long i = 0; i<size; i++) 
        {
            long long target = friends[i];
            long long l = 0;
            long long r = 0;
            for(long long j = 0; j < size; j++) {
                if(friends[j]<target) l++;
                if(friends[j]> target) r++;
            }
            long long c = max(l,r);
            if(c <min_c) 
            {
                min_c =c;
            }
        }

        cout << min_c<< "\n";
    }   


}