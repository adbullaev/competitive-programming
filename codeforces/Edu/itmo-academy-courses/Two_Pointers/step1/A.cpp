#include <bits/stdc++.h>
using namespace std;
long long n,m;
vector<long long> result;
int main()
{

    cin >> n >> m;
    
    vector<long long> vecn(max(n,m),0);
    vector<long long> vecm(max(n,m),0);

    for(long long i = 0;i<n;i++) 
    {
        long long inp;
        cin >> inp;
        vecn[i]=inp;
    }
    for(long long i = 0;i<m;i++)
    {
        long long inp;
        cin >> inp;
        vecm[i]=inp;
    }
    long long i = 0;
    long long j = 0;
    while(true)
    {

        if(i == n && j == m) break;
        
        if((j== m || vecn[i] <= vecm[j]) && i < n  )
        {
            result.push_back(vecn[i]);
            i++;
        } else {
            result.push_back(vecm[j]);
            j++;
        }
        
    }

    for(long long k = 0;k<result.size();k++) cout << result[k] << " ";


}