#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i = 2;i*i<=n;i++)
    {
        long long exp = 0;
        while(n%i == 0)
        {
            exp++;
            n/=i;
        }

        for(long long i =1;exp-i>=0;i++)
        {
            exp -= i;
            ans++;
        }
    }

    if(n > 1) ans++;

    cout << ans << "\n";

}