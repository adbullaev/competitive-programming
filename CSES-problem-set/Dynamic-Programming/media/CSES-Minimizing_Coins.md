# CSES — Minimizing Coins

## Analysis
* **Subproblem:** `DP[i]` = minimum number of coins required to produce sum `i`.
* **Relation:** 
  $$DP[i] = \min_{j \in C, \, j \le i} (DP[i - j]) + 1$$
  *(where $C$ is the set of coin values)*
* **Topological Order:** $i$ from $1$ to $x$.
* **Base Case:** `DP[0] = 0` (0 coins needed to form sum 0). All other states initialized to $\infty$.


* **Original Problem:** `DP[x]` (if `DP[x]` equals $\infty$, output `-1`).
* **Time Complexity:**
  * Time: $O(n \cdot x)$ — $x$ states, up to $n$ transitions per state.
  * Space: $O(x)$ (for the DP array).