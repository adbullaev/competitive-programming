#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >>a >>b >>c;

        
        vector<int> p = {a,b,c};
        
        int result = 0;
        while(true)
        {
            sort(p.begin(), p.end());

       
            if (p[0] == p[1] || p[1] == p[2]) {
                break;
            }

            p[0]++;
            p[2]--;
            result++;
        }
        cout << result << "\n";
    }

     
}