# CSES — Book Shop

## Analysis
* **Subproblem:** `DP[i][w]` = maximum total number of pages that can be obtained using a subset of the first `i` books with a total price not exceeding `w`.
* **Relation:** 
  $$DP[i][w] = \begin{cases} 
  DP[i-1][w] & \text{if } w < h_i \\ 
  \max\Big(DP[i-1][w], \; DP[i-1][w - h_i] + s_i\Big) & \text{if } w \ge h_i 
  \end{cases}$$
  *(where $h_i$ is the price of the $i$-th book, and $s_i$ is the number of pages in the $i$-th book)*
* **Topological Order:** Iterate $i$ from $1$ to $n$ (books), and for 1D DP optimization, iterate $w$ from $x$ down to $h_i$ (budget).
* **Base Case:** 
  $$DP[0][w] = 0 \quad \forall w \in [0, x]$$
* **Original Problem:** `DP[n][x]`.
* **Time Complexity:**
  * Time: $O(n \cdot x)$ — $n \cdot x$ total state updates, $O(1)$ transition per state.
  * Space: $O(n \cdot x)$ (optimized to $O(x)$ space using 1D DP with reverse iteration over budget).