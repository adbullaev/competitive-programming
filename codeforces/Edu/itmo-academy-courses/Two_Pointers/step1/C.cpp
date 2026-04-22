#include <bits/stdc++.h>
using namespace std;

long long n,m;
long long counta = 0;
long long countb = 0;
long long counter;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    vector<long long > a(n);
    vector<long long > b(m);
    long long pairs = 0;
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i] = inp;
    }

    for(long long i = 0;i<m;i++)
    {
        long long inp;
        cin >> inp;
        b[i] = inp;
    }
    
    long long i = 0;
    long long j = 0;
    while(i < n && j<m)
    {   if(a[i]<b[j]){ i++;}
        else if(a[i]>b[j]) {j++;}      
        else
        {
            counta = countb = 0;
            counter = a[i];
            while(i<n && a[i] == counter )
            {
                counta++;
                i++;
            }
            while(j<m && b[j] == counter )
            {
                countb++;
                j++;
            }
            
            pairs += counta * countb;
        }        
    }
    

    cout << pairs;

}