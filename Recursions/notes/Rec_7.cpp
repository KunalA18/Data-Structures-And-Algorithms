#include <iostream>
using namespace std;
//sum of first n natural numbers

/*  sum(n) = 1+2+3+4+......(n-1)+n
    sum(n) = sum(n-1) + n;

    sum(n) =|  0            n=0
            |  sum(n-1)+n   n>0
*/
//There should be a terminating statement in recursion

int sum(int n) //Recursion
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n; //Time Complexity: O(n)
    }
}
int sumD(int n) //Direct
{
    return n * (n + 1) / 2; //Time Complexity: O(1)
}
int sumL(int n) //Loops
{
    int i, s = 0;
    for (i = 0; i <= n; i++)
    {
        s += i; //Time Complexity: O(n)
    }
    return s;
}

int main()
{
    cout << sum(5) << endl;
    cout << sumD(5) << endl;
    cout << sumL(5) << endl;
    return 0;
}

//can directly use formula n(n+1)/2 for summation of n natural numbers, which is quicker
//Just for practice did using recursion