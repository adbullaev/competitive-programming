#include <bits/stdc++.h>
using namespace std;
long long n,m;

int main()
{

    cin >> n >> m;
    vector<long long> vecn(max(n,m),LONG_LONG_MAX);
    vector<long long> vecm(max(n,m),LONG_LONG_MAX);
    vector<long long> result;

    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        vecn[i] = inp;
    }
    for(long long i = 0;i<m;i++)
    {
        long long inp;
        cin >> inp;
        vecm[i] = inp;
    }
    long long j = 0;

    for(long long i = 0; i<m;i++)
    {
        while(j<n && vecn[j]<vecm[i]) j++;
        result.push_back(j);
    }
    for(long long i = 0; i<result.size(); i++) cout << result[i] << " ";
}