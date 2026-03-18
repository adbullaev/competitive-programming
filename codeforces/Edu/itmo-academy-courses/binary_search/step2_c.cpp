#include <iostream>
using namespace std;
 
int main() {
    long long n, x, y;
    cin >> n >> x >> y;
 
    if (n == 1) {
        cout << 0;
        return 0;
    }
 
    long long first = min(x, y);   
    long long need = n - 1;        
    long long l = 0, r = need * first+1;
 
    while (l < r) {
        long long m = (l + r) / 2;
        printf("%lld")
        if (m / x + m / y >= need)
            r = m;
        else
            l = m + 1;
    }
 
    cout << l + first;
}