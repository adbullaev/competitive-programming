#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> cnt(m + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= m) {
            cnt[a[i]]++;
        }
    }

    vector<int> f(m + 1, 0);
    
  
    for (int i = 1; i <= m; ++i) {
        if (cnt[i] > 0) {
           
            for (int j = i; j <= m; j += i) {
                f[j] += cnt[i];
            }
        }
    }

    int best_L = 1;
    int best_cnt = 0;

    
    for (int i = 1; i <= m; ++i) {
        if (f[i] > best_cnt) {
            best_cnt = f[i];
            best_L = i;
        }
    }

   
    cout << best_L << " " << best_cnt << "\n";

   
    if (best_cnt > 0) {
        for (int i = 0; i < n; ++i) {
            if (a[i] <= m && best_L % a[i] == 0) {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}