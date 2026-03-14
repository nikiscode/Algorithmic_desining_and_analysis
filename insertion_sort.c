##insertion sort pseudocode and its example
Algorithm InsertionSort(A, n)
1. For i ← 1 to n-1 do
2.     key ← A[i]
3.     j ← i - 1
4.     while j ≥ 0 and A[j] > key do
5.         A[j + 1] ← A[j]
6.         j ← j - 1
7.     end while
8.     A[j + 1] ← key
9. End For
End Algorithm

##Explanation (Short)
Start from the second element.
Compare it with the previous elements.
Shift larger elements one position right.
Insert the element in its correct sorted position.
Time Complexity
Best Case: O(n) (already sorted)
Average Case: O(n²)
Worst Case: O(n²)

  ##Example:
  Array:
A = [8, 3, 5, 2, 4]
n = 5
Step 1 (i = 1)
key = A[1] = 3
j = 0
Compare:
A[0] = 8 > 3 → shift 8 to right
Array after shift:
[8, 8, 5, 2, 4]
Insert key:
[3, 8, 5, 2, 4]
Step 2 (i = 2)
key = A[2] = 5
j = 1
Compare:
A[1] = 8 > 5 → shift
Array:
[3, 8, 8, 2, 4]
Insert key:
[3, 5, 8, 2, 4]
Step 3 (i = 3)
key = A[3] = 2
j = 2
Compare and shift:
8 > 2 → shift
5 > 2 → shift
3 > 2 → shift
Array during shifts:
[3,5,8,8,4]
[3,5,5,8,4]
[3,3,5,8,4]
Insert key:
[2,3,5,8,4]
Step 4 (i = 4)
key = A[4] = 4
j = 3
Compare:
8 > 4 → shift
5 > 4 → shift
Array during shift:
[2,3,5,8,8]
[2,3,5,5,8]
Insert key:
[2,3,4,5,8]
Final Sorted Array
[2, 3, 4, 5, 8]
