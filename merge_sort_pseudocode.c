##merge sort
Algorithm MergeSort(A, left, right)

1. if left < right then
2.     mid ← (left + right) / 2
3.     MergeSort(A, left, mid)
4.     MergeSort(A, mid + 1, right)
5.     Merge(A, left, mid, right)
6. end if
  Example Solution (Step-by-Step)
Given Array
A = [8, 3, 5, 2, 4]
Step 1 – Divide
Split array until single elements.
[8,3,5,2,4]
→ [8,3,5]   [2,4]
→ [8] [3,5]   [2] [4]
→ [8] [3] [5] [2] [4]
Step 2 – Merge Small Arrays
Merge [3] and [5]
[3] [5] → [3,5]
Merge [8] and [3,5]
Compare:
3 < 8
5 < 8
Result:
[3,5,8]
Merge [2] and [4]
[2] [4] → [2,4]
Step 3 – Final Merge
Merge:
[3,5,8] and [2,4]
Comparisons:
2 < 3 → [2]
3 < 4 → [2,3]
4 < 5 → [2,3,4]
5 < 8 → [2,3,4,5]
8 → [2,3,4,5,8]
Final Sorted Array
[2,3,4,5,8]
Time Complexity
Case	Complexity
Best Case	O(n log n)
Average Case	O(n log n)
Worst Case	O(n log n)
