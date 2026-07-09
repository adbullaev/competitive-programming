/*
 Problem: CSES - [Problem Name]
 Link: [URL to the problem]

Core Idea:
   [1-2 sentences explaining your approach/strategy without excessive text]

 Complexity Analysis:
   - Time Complexity: O(...) — [Brief justification, e.g., visiting each vertex once]
   - Space Complexity: O(...) — [Brief justification, e.g., adjacency list and visited array]
*/
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
        vector<long long> vec(n+1);
        for(long long i = 1;i<=n;i++)
        {
            cin >> vec[i];  
        }
        vector<long long> prefix_sums(n+1,0);
        for(long long i = 1;i<=n;i++)
        {
            if(vec[i] == 2 || vec[i] == 3) prefix_sums[i] = prefix_sums[i-1] - 1;            
            else prefix_sums[i] = prefix_sums[i-1] + 1; 
        }
        long long first_sec = 0;
        for(long long i = 1;i<=n;i++)
        {
            if(prefix_sums[i] >= 0) 
            {
                first_sec = i;
                break;
            }
        }
        prefix_sums[first_sec] = 0;

        long long second_sec = 0;

        for(long long i = first_sec+1;i<=n;i++)
        {
            if(vec[i] == 3) prefix_sums[i] = prefix_sums[i-1] - 1;            
            else prefix_sums[i] = prefix_sums[i-1] + 1; 
        }
        for(long long i = first_sec+1;i<=n;i++)
        {
            if(prefix_sums[i] >= 0) 
            {
                second_sec = i;
                break;
            }
        }

        if(first_sec > 0 && second_sec > first_sec && second_sec<n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

}