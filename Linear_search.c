//linear search algorithm

LinearSearch(A, n, key)
1. Start
2. Set i = 0
3. Repeat while i < n
       If A[i] == key
            Print "Element found at position", i
            Stop
       End If
       i = i + 1
4. If i == n
       Print "Element not found"
5. Stop

       ## Example
Array:
A = [12, 25, 8, 32, 17]
Key to search:
key = 32
Step-by-Step Process
Step	Index (i)	Element	Comparison
1	0	12	12 ≠ 32
2	1	25	25 ≠ 32
3	2	8	8 ≠ 32
4	3	32	32 = 32       → Found

       ##Result:
Element 32 is found at index 3 (or position 4 in human counting).
Time Complexity
Best Case: O(1) (element found at first position)
Worst Case: O(n) (element at last position or not present)
