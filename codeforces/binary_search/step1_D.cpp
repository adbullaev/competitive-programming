#include <bits/stdc++.h>
using namespace std;

long long left_binary_search(const vector<long long>& a, long long num) {
    long long left = 0;
    long long right = a.size(); 
    long long result = a.size();
    
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (a[mid] >= num) {
            result = mid; 
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

long long right_binary_search(const vector<long long>& a, long long num) {
    long long left = 0;
    long long right = a.size();
    long long result = a.size();

    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (a[mid] > num) {
            result = mid; 
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    long long n;
    
    if (scanf("%lld", &n) != 1) return 0;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    sort(a.begin(), a.end());

    long long k;
    
    if (scanf("%lld", &k) != 1) return 0;

    for (long long i = 0; i < k; i++) {
        long long l, r;
        scanf("%lld %lld", &l, &r);
        
        long long index_r = right_binary_search(a, r);
        long long index_l = left_binary_search(a, l);
        
        printf("%lld ", index_r - index_l);
    }

    return 0;
}