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
        string s;
        cin >> s;

        for(long long i = 0;i<s.size();i++)
        {
            long long best = s[i] - '0';
            long long pos = i; 
            for(long long j = i; j < min(i+10,(long long)s.size());j++ )
            {
                if(s[j] - '0'  - (j-i) > best)
                {
                    best = s[j]-'0'-(j-i);
                    pos = j;
                }
            }
            while(pos > i)
            {
                swap(s[pos],s[pos-1]);
                pos--;
            }
            s[i] = char(best + '0');
        }

        cout << s << "\n";
    }

}
