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
        
        long long ones = 0;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            if(inp == 1) ones++;
            vec.push_back(inp);
        }

        long long l = -1;
        long long r = -1;
        long long best_l = 0;
        long long best_r = 0;
        long long max_dist = 0;
        if(ones == 0)
        {
            for(long long i = 0;i<n;i++)
            {
                if(vec[i] == -1)
                {
                    l = i;
                    break;
                }
            }
            for(long long i = n-1;i>=0;i++)
            {
                if(vec[i] == -1)
                {
                    r = i;
                    break;
                }
            }
            vec[l] = 1;
            vec[r] = 1;
            for(long long i = 0;i<n;i++)
            {
                if(vec[i] == -1)
                {
                    vec[i] = 0;
                }
            }
        }
        else 
        {
            for(long long i = 0;i<n;i++)
            {
                if(vec[i] == -1 || vec[i] == 1)
                {
                    if(l == -1) 
                    {
                        l = i;
                    }
                    else if(r == -1)
                    {
                        r = i;
                        max_dist = r-l;
                        best_l = l;
                        best_r = r;
                    }
                }
            }
        }
    }
}