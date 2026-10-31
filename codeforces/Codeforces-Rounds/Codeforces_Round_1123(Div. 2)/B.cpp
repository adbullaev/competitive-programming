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
        long long n;
        cin >> n;
        map<long long ,long long> a;
        for(long long i = 0;i<n;i++)
        {
            long long inp;
            cin >> inp;
            a[inp]++;
        }
        while(a.size()>0) for(auto& [key,value] :a)
        {
            cout << key << " ";
            a[key]--;
            if(a[key] == 0) a.erase(key);
        }
        cout << "\n";
    }

}