#include <bits/stdc++.h>
using namespace std;
long long t;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
    {

    long long n,d,m;
    vector<long long> l;
    long long answer = 0;
    cin >> n >> d >> m;

    vector<long long> quantity(n+1,0);
    for(long long  i = 0;i<m;i++)
    {
        long long inp;
        cin >> inp;
        l.push_back(inp);
    }


   

    for(long long i = 0 ; i<m;i++)
    {
        quantity[l[i]-1]++;
    }

    sort(quantity.rbegin(),quantity.rend());
   
    for(long long i = 0;i<n;i++)
    {
        answer += quantity[i]*((i/d)+1);
       
    }

    cout <<  answer << "\n";
    l.clear();

    }
    
    
}