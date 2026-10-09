#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    set<long long> s;
    for(long long i = 0;i<n;i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
}