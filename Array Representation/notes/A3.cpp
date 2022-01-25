#include <iostream>
using namespace std;

// to increase size of array make a new array of larger size and assign prev array values to new array
//then make the prev pointer point the new array
int main()
{
    int *p = new int[5];
    int *q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete[] p;
    p = q;
    q = NULL;
    return 0;
}