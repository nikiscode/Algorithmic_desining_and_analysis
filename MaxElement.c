

.//MaxElement Algorithm
ALGORITHM MaxElement(A[0…n-1])
//Determines the value of the largest element in a given array
//Input: An array A[0…n-1] of real numbers
//Output: The value of the largest element in A
maxval ← A[0]
for i ← 1 to n-1 do
if A[i] > maxval
maxval ← A[i]
return maxval
