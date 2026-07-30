#include <bits/stdc++.h>
using namespace std;

long long start_vertex;
long long n;
vector<vector<int>> g;


vector<bool> used(n, false);

vector<long long> parents(n+1);

void dfs(int v) {
    used[v] = true;
    for (int u : g[v]) {
        if (!used[u])
            dfs(u);
    }
}


int main()
{
    
// iterative
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