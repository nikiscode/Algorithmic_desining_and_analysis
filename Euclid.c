
//Euclid Algorithm
ALGORITHM Euclid(m, n)
Step 1 If n = 0, return m and stop; otherwise proceed to Step 2
Step 2 Divide m by n and assign the value of the remainder to r
Step 3 Assign the value of n to m and the value of r to n. Go to Step 1.
PSEUDOCODE
ALGORITHM Euclid(m, n)
// computes gcd(m, n) by Euclid’s algorithm
// Input: Two nonnegative, not-both-zero intgers m and n
// Output: Greatest common divisor of m & n
while n ≠ 0 do
r ← m mod n
m← n
n ← r
return m
