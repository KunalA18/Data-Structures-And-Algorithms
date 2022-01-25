#include <iostream>
using namespace std;

/*
Initializing Arrays:

1) int A[5];                        0  1  2  3  4
                                A   ?  ?  ?  ?  ?   Garbage values

2) int A[5] = {2,4,6,8,10};         0  1  2  3  4  
                                A   2  4  6  8  10                      

3) int A[5] = {2,4};                0  1  2  3  4
                                A   2  4  0  0  0

4) int A[5] = {0};                  0  1  2  3  4
                                A   0  0  0  0  0

5) int A[] = {2,4,6,8,10};          0  1  2  3  4
                                A   2  4  6  8  10

*/

//Accessing elements of array

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    cout << A[2] << endl;
    cout << 2 [A] << endl;
    cout << *(A + 2) << endl;
    return 0;
}

//use loops to traverse array