#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

struct matrix
{
    vector<vector<long long>> m;
    
    matrix(long long a,long long b)
    {
        m.resize(a,vector<long long>(b,0));
    }

};

matrix multiply(const matrix& A , const matrix& B)
{
    long long n = A.m.size();
    long long m = A.m[0].size();
    long long q = B.m.size();
    long long p = B.m[0].size();

    matrix C(n,p);

    for(long long i = 0;i<n;++i)
    {
        for(long long k = 0;k<m;++k)
        {
            if (A.m[i][k] == 0) continue;
            for(long long j = 0;j<p;++j)
            {
                C.m[i][j] = (C.m[i][j] + A.m[i][k]*B.m[k][j])% MOD;
            }
        }
    }
    return C;
}



matrix power(matrix& A,long long n)
{
    if(n == 1) return A;

    if(n % 2 == 0) 
    {
        matrix a = power(A,n/2);
        return multiply(a,a);
    }
    else return multiply(power(A,n-1),A);
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        matrix f(6,1);
        long long first_f = 32;

        for(long long i = 0;i<6;i++)
        {
            f.m[i][0] = first_f;
            first_f /= 2;
        }

        matrix inter(6,6);

        for(long long i = 0;i<6;i++)
        {
            inter.m[0][i] = 1;
        }
        for(long long i = 1;i<6;i++)
        {
            inter.m[i][i-1] = 1;
        }
    
        cin >> n;

        if(n<7) 
        {
            cout << f.m[(6-n)][0];
            return 0;
        }
        matrix answer = multiply(power(inter,n-6),f);
        cout << answer.m[0][0];

    }
    
}