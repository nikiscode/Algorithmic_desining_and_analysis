Sequential Search Algorithm
ALGORITHM SequentialSearch(A[0…n-1], k)
//Searches for a given value in a given array by sequential search
//Input: An array A[0…n-1] and a search key k
//Output: The index of the first element of A that matches k or -1 if
// there are no matching elements.
i ← 0
while i < n and A[i] ≠ k do
i ← i + 1
if i < n return i
else return -1
