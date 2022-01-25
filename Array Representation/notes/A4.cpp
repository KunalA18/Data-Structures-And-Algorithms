// 2D arrays
/* memory will be allocated like a single Dimension array
but the compiler allows us to acces that 1D atrray as 2D array
having row no. and column no.*/

#include <iostream>
using namespace std;
int main()
{
    int A[3][4];                                              //declaration  //This array will be created in stack
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 3, 4, 5}}; //initialization
    A[1][2] = 15;                                             // initialization
    return 0;
}
// Creating 2D array in heap(1st method)

#include <iostream>
using namespace std;
int main()
{
    int *A[3]; // array of integer pointers //array of pointers is in stack
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    // each of 3 pointers points to 1 row of array, together forming a 2D array
    //rows are in heap
    return 0;
}

// Creating 2D array in heap(2nd method)
#include <iostream>
using namespace std;
int main()
{
    int **A;          // double pointer // created in stack
    A = new int *[3]; //array of pointers created in heap
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    //rows also created in heap
    return 0;
}