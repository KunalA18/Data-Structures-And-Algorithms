//Fibonacci series
#include <iostream>
using namespace std;

int fib(int n) //loops
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int rfib(int n) //recursion
{
    if (n <= 1)
        return n;
    return rfib(n - 2) + rfib(n - 1);
}
int F[10];
int mfib(int n) //Excessive recursion method
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)

            F[n - 1] = mfib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    printf("%d \n", mfib(5));
    return 0;
}

//Time complexity for recursion method = O(2^n)
//Time complexity for Excessive recursion method = O(n)
// fn call:
/*                    f(5)
                /              \
               /                \
            f(3)                f(4)
            / \             /          \
         f(1) f(2)        f(2)         f(3)
          |   / \         / \          / \
          1 f(0) f(1)   f(0) f(1)    f(1) f(2) 
             |    |      |    |       |   / \
             0    1      0    1       1 f(0) f(1)
                                         |    | 
                                         0    1
*/

// In recursion tree, same func is called many times eg f(0),f(1)
//this is called Excessive Recursive Function
//for this we use static array implementation
// approach is known as "memorization"