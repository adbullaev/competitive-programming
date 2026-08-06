#include <iostream>

using namespace std;

void setIO(string name = "") {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    
    // If a problem name is provided, redirect stdin and stdout to files
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    // Pass the problem name prefix (e.g., for block.in / block.out, use "block")
    setIO("block"); 

    int n;
    cin >> n;
    cout << n << "\n";

    return 0;
}