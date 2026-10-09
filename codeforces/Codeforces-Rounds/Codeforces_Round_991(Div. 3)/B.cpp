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
        long long gen_sum = 0;
        long long odd_sum = 0;
        long long odd_cnt = 0;
        long long even_sum = 0;
        long long even_cnt = 0;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            gen_sum += inp;
            if(i%2 == 0)
            {
                even_sum += inp;
                even_cnt++;
            }
            else
            {
                odd_sum += inp;
                odd_cnt++;
            }
            vec.push_back(inp);
        }

        if(gen_sum % n != 0)
        {
            cout << "NO\n";
        }
        else 
        {
            long long agree = 0;
            if(even_sum % even_cnt == 0  && even_sum / even_cnt == gen_sum / n )
            {
                agree++;
            }
            if(odd_sum % odd_cnt == 0  && odd_sum / odd_cnt == gen_sum / n )
            {
                agree++;
            }
            if(agree == 2)
            {
                cout << "YES\n";
            }
            else 
            {
                cout << "NO\n";
            }
        }


    }
}