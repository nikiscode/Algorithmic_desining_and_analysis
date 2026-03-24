ALGORITHM UniqueElements(A[0…n-1])
//Determines whether all the elements in a given array are distinct
//Input: An array A[0…n-1]
//Output: Returns “true” if all the elements in A are distinct
// and “false” otherwise
for i ← 0 to n - 2 do
for j ← i+1 to n - 1 do
if A[i] = A[j] return false
return true
