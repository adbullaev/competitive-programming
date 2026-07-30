# CSES — Dice Combinations

## Analysis
* **Subproblem:** `DP[i]` = number of ways to construct sum `i`.
* **Base Case:** `DP[0] = 1` (1 way to form sum 0: empty sequence).
* **Relation:** 
  $$DP[i] = \sum_{j=1}^{\min(i, 6)} DP[i - j] \pmod{10^9 + 7}$$
* **Topological Order:** $i$ from $1$ to $n$.
* **Original Problem:** `DP[n]`.
* **Complexity:**
  * Time: $O(n)$ — $n$ states, $O(1)$ transition (at most 6 steps).
  * Space: $O(n)$ (can be optimized to $O(1)$).