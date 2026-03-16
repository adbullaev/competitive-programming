#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> vec;
int result = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++) cin >> vec[i];

    for(int i = 0;i<n-1;i++) 
    {
        result += max(vec[i],vec[i+1]) - min(vec[i],vec[i+1]);
    }

    cout << result;

}