#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long t;
    cin >> t;

    while (t--) 
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> a;
        vector<long long> b;

        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp);
        }
        for(long long i = 0;i<m;i++)
        {
            long long inp;
            cin >> inp;
            b.push_back(inp);
        }
        
        if (n < m * 2) 
        {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ok = true;
        for (long long i = 0; i < m; i++) {
           
            if (a[i] > b[i] || a[n - m + i] < b[i]) {
                ok = false;
                break;
            }
        }

        if (ok == true) cout << "YES\n";
        else cout << "NO\n";
        
    }
    
    return 0;
}