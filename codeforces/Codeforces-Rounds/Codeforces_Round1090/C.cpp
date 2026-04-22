#include <bits/stdc++.h>
using namespace std;

long long t;



int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;


        for (int i = 0; i < n; ++i) {
            int low = i + 1;
            int high1 = 3 * n - 2 * i - 1;
            int high2 = 3 * n - 2 * i;
        
            cout << low << " " << high1 << " " << high2 << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}