#include <bits/stdc++.h>
using namespace std;

struct helper{long long t,z,y;};

long long f(vector<helper> &vec,long long t)
{
    long long ans = 0;
    for(helper h : vec)
    {
        long long one_block_time = h.t * h.z + h.y;
        long long one_block_baloons = h.z;
        long long full_blocks = t/one_block_time;
        long long remainder_time = t%one_block_time;
        long long remainder_baloons = remainder_time/h.t;
        long long overall_baloons = (full_blocks*one_block_baloons) + min(one_block_baloons,remainder_baloons);
        ans+= overall_baloons;
    }
    return ans;
}

vector<long long> finding_helpers(vector<helper> &vec,long long t,long long rem)
{
    
    vector<long long> ans;

    for(helper h : vec)
    {
        long long one_block_time = h.t * h.z + h.y;
        long long one_block_baloons = h.z;
        long long full_blocks = t/one_block_time;
        long long remainder_time = t%one_block_time;
        long long remainder_baloons = remainder_time/h.t;
        long long overall_baloons = (full_blocks*one_block_baloons) + min(one_block_baloons,remainder_baloons);

        ans.push_back(min(rem,overall_baloons));
        rem = max(0LL,rem-overall_baloons);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long x,n;

    cin >> x >> n;
    vector<helper> vec;

    for(long long i = 0;i<n;i++)
    {
        long long t,z,y;
        cin >> t >> z >> y;
        vec.push_back({t,z,y});
    }
    if(x == 0)
    {
        cout << 0 << "\n";
        for(helper c : vec) cout << "0 ";
        return 0;
    }

    long long l = 0;
    long long r =3e9;

    while(r>l+1)
    {
        long long m = (l+r)/2;

        if(f(vec,m) >= x)
        {
            r = m;
        }
        else 
        {
            l = m;
        }

    }

    cout << r << "\n";

    vector<long long> ans_vec = finding_helpers(vec,r,x);
    
    for(long long c : ans_vec)
    {
        cout << c << " ";
    }
    

}