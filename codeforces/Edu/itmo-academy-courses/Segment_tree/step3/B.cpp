#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> T;

void build(int v, int l, int r) {
    if (r - l == 1) {
        T[v] = 1;
        return;
    }
    int mid = (l + r) / 2;
    build(2*v+1, l, mid);
    build(2*v+2, mid, r);
    T[v] = T[2*v+1] + T[2*v+2];
}

int find_kth(int v, int l, int r, int k) {
    if (r - l == 1) return l;

    int mid = (l + r) / 2;

    if (T[2*v+1] >= k)
        return find_kth(2*v+1, l, mid, k);
    else
        return find_kth(2*v+2, mid, r, k - T[2*v+1]);
}


void update(int pos, int v, int l, int r) {
    if (r - l == 1) {
        T[v] = 0;
        return;
    }

    int mid = (l + r) / 2;

    if (pos < mid) update(pos, 2*v+1, l, mid);
    else update(pos, 2*v+2, mid, r);

    T[v] = T[2*v+1] + T[2*v+2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<int> a(n), p(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    T.resize(4 * n);
    build(0, 0, n);

    for (int i = n - 1; i >= 0; i--) {
        int k = (i + 1) - a[i];  
        int pos = find_kth(0, 0, n, k);
        p[i] = pos + 1;           
        update(pos, 0, 0, n);
    }

    for (int x : p) cout << x << " ";
}