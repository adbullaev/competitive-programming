#include <bits/stdc++.h>
using namespace std;

long long check( vector<long long> & recept , vector<long long> & n, vector<long long> & p, long long m)
{
    long long nb;
    long long ns;
    long long nc;

    long long budget = 0;

    nb = recept[0]*m;
    ns = recept[1]*m;
    nc = recept[2]*m;

    nb -=min(nb,n[0]);
    ns -=min(ns,n[1]);
    nc -=min(nc,n[2]);

    if(recept[0]>0)budget += (nb*p[0]);
    if(recept[1]>0)budget += (ns*p[1]);
    if(recept[2]>0)budget += (nc*p[2]);
    
    return budget;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    vector<long long> recept(3,0);
    for(long long i = 0;i<s.size();i++)
    {
        if(s[i] == 'B') recept[0]++;
        if(s[i] == 'S') recept[1]++;
        if(s[i] == 'C') recept[2]++;
    }

    vector<long long> n(3);
    cin >> n[0]>>n[1] >>n[2] ;

    vector<long long> p(3);
    cin >> p[0] >> p[1] >> p[2];

    long long r;
    cin >> r;

    long long left = 0;
    
    long long right = 1e13;

    while(left<=right)
    {
        long long m = left + (right - left)/2;

        if(check(recept,n,p,m) > r)
        {
            right = m - 1;
        }
        else 
        {
            left = m + 1;
        }
    }

    cout << (left == 0?0:left-1) << "\n";

}