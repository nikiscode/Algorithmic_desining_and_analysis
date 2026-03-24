ALGORITHM MatrixSum (A[0…n-1, 0…n-1], B[0…n-1, 0…n-1])
//Adds two n-by-n matrices
//Input: Two n-by-n matrices A and B
//Output: Matrix C = A + B
for i ← 0 to n - 1 do
for j ← 0 to n - 1 do
C[i,j] ← A[i,j] + B[i,j]
return C
