#include <bits/stdc++.h>
using namespace std;

long long start_vertex;
long long n;

int main()
{
    vector<vector<int>> g;
    vector<bool> used(n, false);
    vector<int> st;

    st.push_back(start_vertex);
    used[start_vertex] = true;

    while (!st.empty()) {
        int v = st.back();
        st.pop_back();
        
        for (int to : g[v]) {
            if (!used[to]) {
                used[to] = true;
                st.push_back(to);
            }
        }
    }

}