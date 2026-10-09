#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        long long cnt = 0;
        long long num = 0;
        for(long long i = 0;i<n;i++)
        {
            string s;
            cin >> s;
            if(cnt + s.size() <=m)
            {
                cnt += s.size();
                num++;
            }
            else cnt = m+1;
        }
        cout << num << "\n";
    }
}