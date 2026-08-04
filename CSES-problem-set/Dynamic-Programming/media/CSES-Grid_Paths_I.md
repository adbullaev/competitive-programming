# CSES — Grid Paths I

## Analysis
* **Subproblem:** `DP[i][j]` = number of valid paths from upper-left square `(1, 1)` to square `(i, j)`.
* **Relation:** 
  $$DP[i][j] = \begin{cases} 0 & \text{if } grid[i][j] = \text{'*'} \\ (DP[i-1][j] + DP[i][j-1]) \pmod{10^9 + 7} & \text{otherwise} \end{cases}$$
  *(assuming $DP[i][0] = 0$ and $DP[0][j] = 0$ for out-of-bound transitions)*
* **Topological Order:** Row-major order ($i$ from $1$ to $n$, $j$ from $1$ to $n$).
* **Base Case:** 
  $$DP[1][1] = \begin{cases} 1 & \text{if } grid[1][1] \neq \text{'*'} \\ 0 & \text{if } grid[1][1] = \text{'*'} \end{cases}$$
* **Original Problem:** `DP[n][n]`.
* **Time Complexity:**
  * Time: $O(n^2)$ — $n^2$ states, $O(1)$ transitions per state.
  * Space: $O(n^2)$ (can be optimized to $O(n)$ space).