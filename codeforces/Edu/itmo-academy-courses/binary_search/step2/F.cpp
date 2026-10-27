#include <bits/stdc++.h>
using namespace std;

vector<long long> a;

bool check(string &t,string &p,long long m)
{
    vector<bool> erased(t.size());
    for(long long i = 0;i<m;i++)
    {
        erased[a[i]-1] = 1; 
    }

    long long i =0;
    long long j =0;

    while(i <p.size() && j < t.size())
    {
        if(erased[j] == 0 && t[j] == p[i])
        {
            i++;
        }
        j++;
    }

    if(i == p.size()) return 1;
    else return 0;
}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string t,p;

    cin >> t >> p;
    

    for(long long i = 0;i< t.size();i++)
    {
        long long inp;
        cin >> inp;
        a.push_back(inp);
    }

    long long l = 0;
    long long r = (long long)t.size() - (long long)p.size();
    long long ans = 0;
    while(l<=r)
    {
        long long m = (l+r)/2;
        if(check(t,p,m) == 1)
        {
            ans = m;
            l=m+1;
        }
        else r = m-1;
    }

    cout << ans << "\n";

}