#include <bits/stdc++.h>
using namespace std;

long long t;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


const int MAXP = 200000; 
vector<long long> primes;


void eratosfen() {
    vector<bool> is_prime(MAXP + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= MAXP; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAXP; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= MAXP; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
}

void solve() {
    int n;
    cin >> n;
    
    
    for (int i = 0; i < n; ++i) {
       
        long long val = primes[i] * primes[i + 1];
        cout << val << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    eratosfen(); 

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}