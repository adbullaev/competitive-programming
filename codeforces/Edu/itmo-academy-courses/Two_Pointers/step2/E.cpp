#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long sum;
map<long long,long long> list_used;

bool good()
{
    if(sum<=k) return true;
    else return false;
}

void add(long long x)
{
    list_used[x]++;
    if(list_used[x] == 1)
    {
        sum++;
    }
}

void errase(long long x)
{
    list_used[x]--;
    if(list_used[x] == 0) sum--;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    vector<long long> a(n);
    for(long long i = 0;i<n;i++)
    {
        long long inp;
        cin >> inp;
        a[i] = inp;
    }

    

    long long r = 0;
    long long l = 0;
    sum = 0;
    long long result = 0;
    const long long asize = a.size();
    for(long long l = 0; l<n;l++)
    {
        
        while(r<n && good())
        {
            add(a[r]);
            r++;
        }
        result += good() ? (r - l) : (r - l - 1);
        errase(a[l]);
    }

    cout << result;
}