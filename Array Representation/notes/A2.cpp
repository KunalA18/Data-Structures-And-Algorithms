// Static vs Dynamic array
#include <iostream>
using namespace std;

int main()
{
    int A[5]; //Static
    int n;
    cin >> n;
    int B[n]; //Dynamic array
    return 0;
}

/* static because size of above array A was decided at compile time
though the memory will be alloted during runtime only */

/* B is dynamic as size is decided during runtime
*/

//Both arrays are created in stack
//Dynamic arrays are not allowed in C language. Allowed in C++

// CREATING IN HEAP
// for runtime initialization
// for accessing anything in heap we shall use pointer

void main1()
{
    int a[5];
    int *p;         // p is created in stack as its a variable
    p = new int[5]; //created array in heap
    p[0] = 5;
    p[2] = 10;  //pointer acts as name of array
    delete[] p; //deallocating memory in heap
}

//stack array cant be resized
// heap array can be resized but in some other way.