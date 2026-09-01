int phi(int n) {
	int ans = n;
	for (int p = 2; p * p <= n; p++) {
		if (n % p == 0) {
			while (n % p == 0) { n /= p; }
			ans -= ans / p;
		}
	}
	if (n > 1) { ans -= ans / n; }
	return ans;
}

int MAX_N  = 1e8;
vector<int>  phi_sieve(MAX_N, 0);

void precompute_phi() {
	for (int i = 1; i < MAX_N; i++) { phi_sieve[i] = i; }
	for (int i = 2; i < MAX_N; i++) {
		// If i is prime
		if (phi_sieve[i] == i) {
			for (int j = i; j < MAX_N; j += i) { phi_sieve[j] -= phi_sieve[j] / i; }
		}
	}
}