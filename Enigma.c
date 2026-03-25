//Enigma Algorithm
ALGORITHM Enigma(A[0..n − 1, 0..n − 1])
//Input: A matrix A[0..n − 1, 0..n − 1] of real numbers
for i ←0 to n − 2 do
for j ←i + 1 to n − 1 do
if A[i, j ] ≠ A[j, i]
return false
return true
a) What does this algorithm compute?
b) What is its basic operation?
c) What is the efficiency class of this algorithm?
Soln:
a) This algorithm checks if the input square matrix is symmetric or not.
b) Basic Operation is comparison
c) C(n) is given as follows:
C(n) Є O(n2)
