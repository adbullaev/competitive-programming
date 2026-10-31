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
        cin >>n;

        string a;
        string b;

        cin >> a >> b;

        string reverse_a;
        for(long long i = 0;i<n;i++)
        {
            if(a[i] == '1') reverse_a.push_back('0');
            else reverse_a.push_back('1');
        }
        
        if(a==b || reverse_a == b)
        {

            long long k = 0;
            vector<pair<long long,long long>> lr;
            long long ones = 0;
            if(reverse_a == b)
            {
                lr.push_back({1,n});
                a = reverse_a;
            }
            
            for(long long i = 0;i<n;i++)
            {
                if(a[i] == '1')
                {
                    ones++;
                    lr.push_back({i+1,i+1});
                }
            }

            if(ones%2 == 1)
            {
                lr.push_back({1,1});
                lr.push_back({1,n});
                lr.push_back({2,n});
            }
            cout << "yes\n" << lr.size() <<"\n";

            for(pair<long long,long long> op:lr)
            {
                cout << op.first << " " << op.second << "\n";
            }
        }
        else 
        {
            cout << "NO\n";
        }
        
    }


    

}
