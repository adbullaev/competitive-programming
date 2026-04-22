#include <bits/stdc++.h>
using namespace std;

long long n;
long long op1 , op2 , op3;
int main()
{   

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<long long> vec(n); 
    for(long long i = 0;i<n;i++)
    {   

        cin >> op1 >> op2 >> op3 ;
        vec[i] = op1+op2+op3;
    }
    long long sum = 0;
    for(long long i = 0;i<n;i++)
    {
        if(vec[i] >= 2) sum++;
    }

    cout << sum << "\n";
    

}