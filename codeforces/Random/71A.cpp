#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while(n--)
    {
        string word;
        cin >> word;
        long long sz = word.size();
        if(sz>10) cout << word[0] << sz-2 << word[sz-1] << "\n";
        else cout << word << "\n";

    }
}