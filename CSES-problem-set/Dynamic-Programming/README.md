# ⚡ CSES: Dynamic Programming Solutions

My personal repository containing solutions to the CSES "Dynamic Programming" section. Each source file contains a detailed comment section at the top with my analysis of the solution logic and asymptotic complexity.

---

## 📈 Progress Tracker
+ [x] Basic DP & Coin Problems: (Classical DP, Knapsack-like) 5 / 5
+ [ ] Sequences & Paths: (LIS, Grid DP, Path Counting) 0 / 5
+ [ ] Advanced DP Techniques: (Digit DP, Bitmask DP, Broken Profile) 0 / 8
+ [ ] Trees & Optimization: (Tree DP, Matrix Exponentiation, Convex Hull Trick) 0 / 5
  
#### Total Progress: 7 / 23 🟩🟩⬛⬛⬛⬛⬛⬛⬛⬛ (21%)

---

## 🗺️ Task Directory

### 1. Basic DP & Coin Problems
| Task | Status | Source Code |
| :--- | :---: | :---: |
| 1. Dice Combinations | ✅ | [Dice_Combinations.cpp](./Dice_Combinations.cpp) |
| 2. Minimizing Coins | ✅ | [Minimizing_Coins.cpp](./Minimizing_Coins.cpp) |
| 3. Coin Combinations I | ✅ | [Coin_Combinations_I.cpp](./Coin_Combinations_I.cpp) |
| 4. Coin Combinations II | ✅ | [Coin_Combinations_II.cpp](./Coin_Combinations_II.cpp) |
| 5. Removing Digits | ✅ | [Removing_Digits.cpp](./Removing_Digits.cpp) |

### 2. Sequences & Paths
| Task | Status | Source Code |
| :--- | :---: | :---: |
| 6. Grid Paths | ✅ | [Grid_Paths.cpp](./Grid_Paths.cpp) |
| 7. Book Shop | ✅ | [Book_Shop.cpp](./Book_Shop.cpp) |
| 8. Array Description | ⏳ | [Array_Description.cpp](./Array_Description.cpp) |
| 9. Counting Towers | ⏳ | [Counting_Towers.cpp](./Counting_Towers.cpp) |
| 10. Edit Distance | ⏳ | [Edit_Distance.cpp](./Edit_Distance.cpp) |

### 3. Advanced DP Techniques
| Task | Status | Source Code |
| :--- | :---: | :---: |
| 11. Longest Common Subsequence | ⏳ | [Longest_Common_Subsequence.cpp](./Longest_Common_Subsequence.cpp) |
| 12. Rectangle Cutting | ⏳ | [Rectangle_Cutting.cpp](./Rectangle_Cutting.cpp) |
| 13. Minimal Grid Path | ⏳ | [Minimal_Grid_Path.cpp](./Minimal_Grid_Path.cpp) |
| 14. Money Sums | ⏳ | [Money_Sums.cpp](./Money_Sums.cpp) |
| 15. Removal Game | ⏳ | [Removal_Game.cpp](./Removal_Game.cpp) |
| 16. Two Sets II | ⏳ | [Two_Sets_II.cpp](./Two_Sets_II.cpp) |
| 17. Mountain Range | ⏳ | [Mountain_Range.cpp](./Mountain_Range.cpp) |
| 18. Increasing Subsequence | ⏳ | [Increasing_Subsequence.cpp](./Increasing_Subsequence.cpp) |

### 4. Trees & Optimization
| Task | Status | Source Code |
| :--- | :---: | :---: |
| 19. Projects | ⏳ | [Projects.cpp](./Projects.cpp) |
| 20. Elevator Rides | ⏳ | [Elevator_Rides.cpp](./Elevator_Rides.cpp) |
| 21. Counting Tilings | ⏳ | [Counting_Tilings.cpp](./Counting_Tilings.cpp) |
| 22. Counting Numbers | ⏳ | [Counting_Numbers.cpp](./Counting_Numbers.cpp) |
| 23. Increasing Subsequence II | ⏳ | [Increasing_Subsequence_II.cpp](./Increasing_Subsequence_II.cpp) |

---

## additional notes
- I will use the SRTBOT method in every solution.
  
  **SRTBOT** is a systematic, six-step framework used to design and analyze Dynamic Programming (DP) algorithms. It is widely taught in top-tier computer science courses, such as MIT 6.006.

  ### Framework Breakdown

* **S – Subproblem / State:** Define the subproblems in words. Identify the parameters that uniquely describe a subproblem.
* **R – Relate / Recurrence:** Write a recurrence relation. Express the solution to a subproblem in terms of smaller subproblems.
* **T – Topological order:** Identify the order in which subproblems must be solved. Ensure that dependencies form a Directed Acyclic Graph (DAG) so there are no cycles.
* **B – Base cases:** Define the solutions for the smallest, simplest subproblems directly to stop the recursion.
* **O – Original problem:** State how to find the answer to the original, main problem using the solved subproblems.
* **T – Time analysis:** Calculate the total time complexity. This is usually computed as `(number of subproblems) × (time spent per subproblem) + (time for non-recursive steps)`.

## 🛠️ Environment & Reference
- **Language:** C++ (any_version)
- **Theoretical Base:** MIT 6.006 (Introduction to Algorithms), MIT 6.046J (Design and Analysis of Algorithms), Codeforces EDU, [CP-Algorithms](https://cp-algorithms.com/).