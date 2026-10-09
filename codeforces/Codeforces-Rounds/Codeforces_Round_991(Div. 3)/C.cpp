#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin >> n;
    long long twos = 0;
    long long threes = 0;
    long long sum = 0;
    for(char c : n)
    {
        long long d = c -'0';
        if(d == 2) twos++;
        if(d == 3) threes++;
        sum+=d;
    }

    long long max_2 = min(twos,9LL);
    long long max_3 = min(threes,2LL);
    
    for(long long c3 = 0;c3<=max_3;c3++)
    {
        for(long long c2 = 0;c2 <= max_2;c2++)
        {
            if((sum + c3 * 6 + c2*2)%9 == 0)
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
