#include <bits/stdc++.h>
using namespace std;
long long t;
long long a,b;

vector<long long> find_degrees(long long n,long long m)
{

    vector<long long> degrees(n,0);
    long long u,v;
    for(long long i = 0;i<m;i++)
    {
        cin >> u >> v;
        degrees[u-1]++;
        degrees[v-1]++;
    }
    return degrees;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while(t--)
    {
        cin >> a >> b;
        vector<long long> answers;
        answers = find_degrees(a,b);
        for(long long  i = 0; i<a;i++)
        {
            cout << answers[i] << " ";
        }
        cout << "\n";
    }
    

}