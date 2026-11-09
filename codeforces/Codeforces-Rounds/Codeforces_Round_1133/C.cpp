#include <bits/stdc++.h>
using namespace std;

bool check(long long x, vector<long long>& a, vector<long long>& raz)
{
    vector<long long> bolshe;
    for (long long i = 0; i < raz.size(); i++)
    {
        if (raz[i] > x)
        {
            bolshe.push_back(i);
        }
    }

    if (bolshe.size() > 2)
    {
        return false;
    }
    
    if (bolshe.size() == 0)
    {
        return true;
    }

    
    if (bolshe.size() == 2)
    {
        long long left = bolshe[0] + 1;
        long long right = bolshe[1];

        if (left > right) 
        {
            return false;
        }
        for (long long i = left; i < right; i++)
        {
            if (raz[i] > x / 2) return false;
        }
        if (left > 0 && abs(a[left - 1] - (2 * a[right])) > x) return false;
        if (right < a.size() - 1 && abs(a[right + 1] - (2 * a[left])) > x) return false;
        return true;
    }

    
    long long raz1 = bolshe[0];

   
    {
        long long left = raz1 + 1;
        long long max_r = a.size() - 1;
        for (long long i = left; i < raz.size(); i++)
        {
            if (raz[i] > x / 2) 
            {
                max_r = i; 
                break;
            }
        }
        for (long long right = left; right <= max_r; right++)
        {
            bool ok = true;
            if (left > 0 && abs(a[left - 1] - 2 * a[right]) > x) ok = false;
            if (right < a.size() - 1 && abs(2 * a[left] - a[right + 1]) > x) ok = false;
            if (ok) return true;
        }
    }

    
    {
        long long right = raz1;
        long long min_l = 0;
        for (long long i = right - 1; i >= 0; i--)
        {
            if (raz[i] > x / 2) 
            {
                min_l = i + 1; 
                break;
            }
        }
        for (long long left = min_l; left <= right; left++)
        {
            bool ok = true;
            if (left > 0 && abs(a[left - 1] - 2 * a[right]) > x) ok = false;
            if (right < a.size() - 1 && abs(2 * a[left] - a[right + 1]) > x) ok = false;
            if (ok) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    if (!(cin >> t)) return 0;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        vector<long long> raz;

        for (long long i = 0; i < n; i++)
        {
            long long inp;
            cin >> inp;
            a.push_back(inp);
        }

        for (long long i = 0; i < n - 1; i++)
        {
            raz.push_back(abs(a[i + 1] - a[i]));
        }

        long long l = 0;
        long long r = 2e9+100; 
        long long ans = r;

        while (l <= r)
        {
            long long m = l + (r - l) / 2;
            if (check(m, a, raz))
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}