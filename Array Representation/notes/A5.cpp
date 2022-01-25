//compiler handling of 1D array

/* Address(A[i]) = L + i*w  //index starting from 0
 Address(A[i]) = L + (i-1)*w  //index starting from 1

 when index starts from 1 (or any other number except 0) there is an additional
 operation (i-1) to be performed while calc address. hence array indexing starts from 0

L = base address
i = index
w = size of datatype
*/

// adress of L is known and allocated at runtime which is also known as data-binding
// above formula is RELATIVE formuala based on base addr of array

//compiler handling of 2D array

/*
mapping 2D to 1D array
1) Row major mapping
2) Column major mapping

*/

//Row major mapping
/*
address(A[i][j]) = L + [i*n + j] * w   //index starting from 0
address(A[i][j]) = L + [(i-1)*n + (j-1)] * w   //index starting from 1

*/

// size of matrix = m x n

//Column major mapping
/*
address(A[i][j]) = L + [j*m + i] * w   //index starting from 0
address(A[i][j]) = L + [(j-1)*m + (i-1)] * w   //index starting from 1

*/

// C++ follows row major mapping

//compiler handling of 4D array
// Type A[b][c][d][e]

/*
Row major:-
address(A[i1][i2][i3][i4]) = L + [i1*c*d*e + i2*d*e + i3*e + i4] * w  

Column major:-
address(A[i1][i2][i3][i4]) = L + [i4*a*b*c + i3*a*b + i2*a + i1] * w  
*/

// Horner's rule
/*

address(A[i1][i2][i3][i4]) = L + [i1*c*d*e + i2*d*e + i3*e + i4] * w       Time complexity = O(n^2)

address(A[i1][i2][i3][i4]) = L + [[[i1*c + i2]*d + i3]*e + i4] * w       Time complexity = O(n)
*/