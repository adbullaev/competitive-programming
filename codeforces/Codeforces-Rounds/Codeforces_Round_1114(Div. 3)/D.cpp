#include <bits/stdc++.h>
using namespace std;

void answer()
{
    long long n;
    cin >> n;

    vector<long long> b(n);
    map<long long, long long> shads_count;

    for (long long i = 0; i < n; ++i)
    {
        cin >> b[i];
        shads_count[b[i]]++; 
    }

    
    if (shads_count.begin()->first != 0) 
    {
        cout << -1 << "\n";
        return ;
    }

    
    vector<pair<long long, long long>> S(shads_count.begin(), shads_count.end());
    map<long long, long long> s_to_v;
    long long v_prev = 0;

    
    for (long long i = 0; i < S.size(); ++i) 
    {
        if (i == S.size() - 1) 
        {
            s_to_v[S[i].first] = v_prev + 1;
        } 
        else 
        {
            long long dif = S[i + 1].first - S[i].first;
            long long count_s = S[i].second;

            
            if (dif % count_s != 0) 
            {
                cout << -1 << "\n";
                return ;
            }
            
            long long v_i = dif / count_s;
            if (v_i <= v_prev) 
            {
                cout << -1 << "\n";
                return ;
            }
            
            s_to_v[S[i].first] = v_i;
            v_prev = v_i;
        }
    }

    
    for (long long i = 0; i < n; i++) 
    {
        cout << s_to_v[b[i]] << " ";
    }

    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        answer();
    }

    
}