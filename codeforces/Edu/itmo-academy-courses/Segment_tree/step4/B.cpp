#include <iostream>
#include <vector>

using namespace std;

int MOD;

struct Matrix {
    int mat[2][2];

    Matrix() {
        mat[0][0] = mat[1][1] = 1;
        mat[0][1] = mat[1][0] = 0;
    }
};

Matrix multiply(const Matrix& a, const Matrix& b) {
    Matrix res;
    res.mat[0][0] = (a.mat[0][0] * b.mat[0][0] + a.mat[0][1] * b.mat[1][0]) % MOD;
    res.mat[0][1] = (a.mat[0][0] * b.mat[0][1] + a.mat[0][1] * b.mat[1][1]) % MOD;
    res.mat[1][0] = (a.mat[1][0] * b.mat[0][0] + a.mat[1][1] * b.mat[1][0]) % MOD;
    res.mat[1][1] = (a.mat[1][0] * b.mat[0][1] + a.mat[1][1] * b.mat[1][1]) % MOD;
    return res;
}

int n;
vector<Matrix> tree;

void build(const vector<Matrix>& a, int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        tree[v] = multiply(tree[v * 2], tree[v * 2 + 1]);
    }
}

Matrix query(int v, int tl, int tr, int l, int r) {
    if (l > r) return Matrix(); // Возвращает единичную матрицу
    if (l == tl && r == tr) return tree[v];
    int tm = (tl + tr) / 2;
    return multiply(query(v * 2, tl, tm, l, min(r, tm)),
                    query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

int main() {
    // Ускорение ввода-вывода
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    if (!(cin >> MOD >> n >> m)) return 0;

    vector<Matrix> a(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> a[i].mat[j][k];
            }
        }
    }

    tree.resize(4 * n);
    build(a, 1, 0, n - 1);

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        Matrix res = query(1, 0, n - 1, l - 1, r - 1);
        cout << res.mat[0][0] << " " << res.mat[0][1] << "\n";
        cout << res.mat[1][0] << " " << res.mat[1][1] << "\n\n";
    }

    return 0;
}