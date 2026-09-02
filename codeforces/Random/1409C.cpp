#include <bits/stdc++.h>
using namespace std;

vector<long long> all_derivatives(long long n)
{
    vector<long long> d;
    for(long long i = 1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            d.push_back(i);
            if(i*i != n)
            {
                d.push_back(n/i);
            }
            
        }
    }
    sort(d.begin(),d.end());
    return d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);



    long long t;
    cin >> t;

    while(t--)
    {
        long long n,x,y;
        cin >> n >> x >> y;

        vector<long long> d = all_derivatives((y-x));
      

        long long step = 0;

        for(long long i = 0;i<d.size();i++)
        {
            if(((y-x)/d[i])+1 <= n)
            {
                step = d[i];
                break;
            }
        }

        vector<long long> ans;

        ans.push_back(x);
        ans.push_back(y);

        if(ans.size() < n)
        {
            for(long long i = x+step;i<y;i+=step)
            {
                ans.push_back(i);
            }
        }
        if(ans.size() < n)
        {
            for(long long i = x-step;i>0;i-=step)
            {
                ans.push_back(i);
            }
        }
        if(ans.size() < n)
        {
            for(long long i = y+step;ans.size() < n;i += step)
            {
                ans.push_back(i);
            }
        }

        

        for(long long i = 0;i<n;i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";

    }


}