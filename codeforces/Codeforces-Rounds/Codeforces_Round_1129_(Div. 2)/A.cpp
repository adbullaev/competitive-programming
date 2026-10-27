#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        
        map<long long , long long > used;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            used[inp]++;
        }
        n = used.size();
        vector<bool> mex(n+1,0);
        for(long long i =0 ;i<n;i++)
        {
            if(used[i] >= k)
            {
                used[i]-=k;
                mex[i] = true;
            }
            else if(used[i]>0) 
            {
                long long rem_k = k-used[i];
                used[i] = 0;
                for(long long j = 0;j<i;j++)
                {
                    if(rem_k == 0) break;
                    long long curr_used =  used[j] ; 
                    used[j] = max(used[j]-rem_k , 0LL);
                    rem_k = max(0LL,rem_k-curr_used);
                }
                if(rem_k == 0) 
                {
                    mex[i] = true;
                }
            }
        }

        for(long long i = 0;i<=n;i++)
        {
            if(mex[i] == false)
            {
                cout << i << "\n";
                break;
            }
        }

        
        

    }

    
}
