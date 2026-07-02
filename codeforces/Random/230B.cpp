#include <bits/stdc++.h>
using namespace std;

const int MAX_PRIME = 1000000;
vector<bool> is_prime(MAX_PRIME + 1, true);


void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_PRIME; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_PRIME; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
   
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;

       
        long long r = round(sqrt(x));

      
        if (r * r == x && is_prime[r]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}