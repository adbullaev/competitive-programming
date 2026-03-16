#include <bits/stdc++.h>
using namespace std;
long long n;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n ;
    vector<string> grid(n);
    vector<bool> rows(n,true);
    vector<bool> col(n,true);

    for(long long i = 0;i<n;i++)
    {
        cin >> grid[i];
    }
    
    for(long long i = 0;i<n; i++)
    {
        for(long long j = 0;i<n;i++)
        {
            if(grid[i][j] == '0')
            {
                rows[i]=false;
                col[j]=false;
            }
        }
    }
    long long ans=0;
    for(long long i =0;i<n;i++) if(rows[i] ) ans++;
    for(long long j =0;j<n;j++) if(col[j]) ans++;

    for(long long i = 0;i<n; i++)
    {
        for(long long j = 0;i<n;i++)
        {
            if(grid[i][j] == '1' && !rows[i] && !col[j])
            {
                
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans <<"\n";



}