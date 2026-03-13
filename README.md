## Algorithmic_desining_and_analysis:
1. Introduction to Algorithms
An algorithm is a finite, well-defined sequence of steps used to solve a problem.
##Key Characteristics:
Input
Output
Finiteness
Definiteness
Effectiveness
Performance Measures:
Time Complexity – Execution time as input size grows
Space Complexity – Memory usage as input size grows
  2. Asymptotic Analysis
Asymptotic analysis evaluates algorithm performance for large inputs.
Notation
Meaning
Case
O(n)
Upper bound
Worst case
Ω(n)
Lower bound
Best case
Θ(n)
Tight bound
Average case
Common Time Complexities:
O(1) – Constant
O(log n) – Logarithmic
O(n) – Linear
O(n log n) – Efficient sorting
O(n²) – Quadratic 3. Recurrence Relations
Used to analyze recursive algorithms.
Methods:
Substitution Method
Recursion Tree Method
Master Theorem
Example:
T(n) = 2T(n/2) + n → O(n log n)
4. Divide and Conquer
A problem-solving technique involving:
Divide the problem
Solve subproblems recursively
Combine results
Examples:
Merge Sort
Quick Sort
Binary Search
 5. Greedy Algorithms
Builds solution step-by-step by making locally optimal choices.
Characteristics:
Does not reconsider decisions
Works when greedy choice property holds
Examples:
Activity Selection
Fractional Knapsack
Huffman Coding
 6. Dynamic Programming
Used when problems have:
Overlapping subproblems
Optimal substructure
Techniques:
Memoization (Top-Down)
Tabulation (Bottom-Up)
Examples:
0/1 Knapsack
Longest Common Subsequence
Matrix Chain Multiplication
  7. Backtracking
Systematic search technique that:
Explores all possibilities
Backtracks when a constraint fails
Examples:
N-Queens Problem
Subset Sum
Graph Coloring
8. Branch and Bound
An optimization technique that reduces search space using bounding.
Example:
Travelling Salesman Problem (TSP)
 9. Graph Algorithms
BFS (Breadth-First Search) – Level-wise traversal
DFS (Depth-First Search) – Depth-wise traversal
Dijkstra’s Algorithm – Shortest path
Prim’s & Kruskal’s Algorithm – Minimum Spanning Tree
Topological Sorting – Directed Acyclic Graph ordering
  10. Complexity Classes
P – Solvable in polynomial time
NP – Verifiable in polynomial time
NP-Complete – Hardest problems in NP
NP-Hard – At least as hard as NP problems
