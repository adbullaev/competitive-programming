# CSES — Coin Combinations I

## Analysis
* **Subproblem:** `DP[i]` = number of distinct ways to produce sum `i` using the available coins (order matters).
* **Relation:** 
  $$DP[i] = \sum_{j \in C, \, j \le i} DP[i - j] \pmod{10^9 + 7}$$
  *(where $C$ is the set of available coins)*
* **Topological Order:** $i$ from $1$ to $x$.
* **Base Case:** `DP[0] = 1` (1 way to form sum 0: empty sequence). `DP[i] = 0` for all $0 < i \le x$.
* **Original Problem:** `DP[x]`.
* **Time Complexity:**
  * Time: $O(n \cdot x)$ — $x$ states, $O(n)$ transitions per state.
  * Space: $O(x)$ (for the DP array).