# CSES — Coin Combinations II

## Analysis
* **Subproblem:** `DP[k][i]` = number of distinct ways to produce sum `i` using only a subset of the first `k` coins (order does not matter).
* **Relation:** 
  $$DP[k][i] = \left( DP[k - 1][i] + DP[k][i - c_k] \right) \pmod{10^9 + 7}$$
  *(where $c_k$ is the $k$-th coin)*
* **Topological Order:** Outer loop $k$ from $1$ to $n$ (over coins), inner loop $i$ from $c_k$ to $x$ (over sums).
* **Base Case:** `DP[k][0] = 1` for all $0 \le k \le n$ (1 way to form sum 0: empty set). `DP[0][i] = 0` for all $0 < i \le x$.
* **Original Problem:** `DP[n][x]`.
* **Time Complexity:**
  * Time: $O(n \cdot x)$ — $n \cdot x$ total transitions across all states.
  * Space: $O(x)$ (by optimizing to a 1D DP array updated in-place).