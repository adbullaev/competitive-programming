#include <bits/stdc++.h>
using namespace std;
long long sq_sum(long long n)
{
    long long ans = 0;
    while(n>0)
    {
        ans+=(n%10)*(n%10);
        n/=10;
    }
    return ans;
}

struct m
{
    long long a,b;
};

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
        vector<m> vec;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            vec.push_back({inp,0});
        }
        vector<long long> ones;
        vector<long long> fours;
        for(long long i = 0;i<n;i++)
        {
            while(vec[i].a != 1 && vec[i].a != 4 )
            {
                vec[i].a = sq_sum(vec[i].a);
                vec[i].b +=1;
            }
            if(vec[i].a == 1)
            {
                ones.push_back(vec[i].b);
            }
            else if(vec[i].a == 4)
            {
                fours.push_back(vec[i].b % 8);
            }
        }
        long long ans = 0;
        long long sz = ones.size();

        ans += (sz * (sz -1)) / 2;

        long long cnt[8] = {};
        for (long long x : fours) cnt[x]++;
        for (int i = 0; i < 8; i++) ans += cnt[i] * (cnt[i] - 1) / 2;

        cout << ans << "\n";

    }
}