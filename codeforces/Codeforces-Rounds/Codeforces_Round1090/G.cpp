#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const ll MOD = 676767677;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
         int n, m;
        cin >> n >> m;
    
        vector<int> b(n);
        vector<ll> cnt(m, 0);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            cnt[b[i]]++;
        }


        vector<ll> C(m + 1, 0);
        for (int i = 0; i < m; ++i) {
            C[i + 1] = C[i] + cnt[i];
        }

        ll ans = 1;
        for (int i = 0; i < n; ++i) {
            if (b[i] == 0) continue;

       
            int ni = 2e9; 
            if (i > 0) ni = min(ni, b[i - 1]);
            if (i < n - 1) ni = min(ni, b[i + 1]);

       
            if (b[i] <= ni) {
                ans = 0;
                break;
            }

            if (b[i] == ni + 1) {
            
                ans = (ans * C[b[i]]) % MOD;
            } else {
            
                ans = (ans * cnt[b[i] - 1]) % MOD;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
    