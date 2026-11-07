# Competitive Programming Solutions

A collection of my competitive programming solutions, practice problems, and reusable C++ templates. Solutions are organized by platform, contest, and topic.

## Repository overview

- **Primary language:** C++
- **Problem solution files:** 199 `.cpp` files
- **Reusable template files:** 17 `.cpp` files in `Code_templates/`
- **Total C++ source files:** 216

Counts are based on the `.cpp` files currently in the repository. Template files are excluded from the solution count; compiled executables and duplicate or alternate solution files are not deduplicated.

## Platforms and sections

| Section | Contents | `.cpp` files |
| --- | --- | ---: |
| [`codeforces/`](./codeforces/) | Contest rounds, Codeforces EDU, and practice problems | 137 |
| [`CSES-problem-set/`](./CSES-problem-set/) | Solutions grouped by CSES topic | 32 |
| [`USACO-guide/`](./USACO-guide/) | Bronze and Gold problems, plus greedy-algorithm practice | 10 |
| [`codeany/`](./codeany/) | RFO contests from 2023 and 2025 | 8 |
| [`real_competititons/`](./real_competititons/) | Recent Codeforces and RFO contest solutions | 7 |
| [`E-olymp/`](./E-olymp/) | Dynamic programming problems | 5 |
| **Total solutions** |  | **199** |

### Codeforces

The largest section contains solutions from rated rounds, educational courses, and standalone practice:

- [`Codeforces-Rounds/`](./codeforces/Codeforces-Rounds/) — 67 files across contest rounds.
- [`Edu/`](./codeforces/Edu/) — 51 files, including ITMO Academy courses and community courses.
- [`Random/`](./codeforces/Random/) — 19 standalone practice problems.

### CSES Problem Set

Solutions are arranged by topic, with both a newer and an alternate/older naming set for Dynamic Programming:

- [`Dynamic-Programming/`](./CSES-problem-set/Dynamic-Programming/) — 7 files.
- [`Dynamic-Programming-og/`](./CSES-problem-set/Dynamic-Programming-og/) — 8 files.
- [`Graph-Algorithms/`](./CSES-problem-set/Graph-Algorithms/) — 11 files and a section README.
- [`Introductory-Problems/`](./CSES-problem-set/Introductory-Problems/) — 3 files.
- [`Mathematics/`](./CSES-problem-set/Mathematics/) — 3 files.

### USACO Guide

- [`Bronze/`](./USACO-guide/Bronze/) — introductory problems, including sets and maps.
- [`Gold/`](./USACO-guide/Gold/) — advanced problems, currently including divisibility.
- [`Introduction-to-Greedy-Algorithms/`](./USACO-guide/Introduction-to-Greedy-Algorithms/) — greedy practice.
- See the [USACO Guide section README](./USACO-guide/README.md) for additional context.

### Contests and other platforms

- [`codeany/`](./codeany/) — RFO 2023 Round 1, plus RFO 2025 Round 1, Semi-final, and Final.
- [`real_competititons/`](./real_competititons/) — Codeforces Round 1101 and RFO 2026 Round 2.
- [`E-olymp/Dynamic-Programming/`](./E-olymp/Dynamic-Programming/) — dynamic programming practice.

### Reusable C++ templates

[`Code_templates/`](./Code_templates/) contains 17 source files for common building blocks:

- **Binary search:** basic search, bounds, and binary search on the answer.
- **Graphs:** BFS, DFS, Dijkstra, Bellman–Ford, Floyd–Warshall, and topological sorting.
- **Math:** GCD/LCM, prime factorization, divisors, and Euler's totient function.
- **Utilities:** solution and USACO file-I/O templates.

## Topics

The repository includes practice in:

- Graph traversal, connectivity, shortest paths, and topological sorting
- Dynamic programming
- Greedy and constructive algorithms
- Binary search and two pointers
- Segment trees and disjoint-set union
- Mathematics, number theory, and combinatorics

## Navigating and compiling

Browse by platform, then open a contest or topic folder. Source files are generally named after the problem or its contest letter, such as `Book_Shop.cpp`, `step1_A.cpp`, or `A.cpp`.

Compile an individual solution with a C++17-compatible compiler:

```bash
g++ -std=c++17 -O2 -Wall path/to/solution.cpp -o solution
```

On Windows, use `g++` from MinGW/WSL or the compiler configured in VS Code.
