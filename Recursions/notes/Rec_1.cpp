#include <iostream>
using namespace std;
//Example

// 1st case - Calling phase - Tail Recursion

/* void func1(int n)
{

    if (n > 0)
    {
        cout << n;
        func1(n - 1);
    }
}
int main()
{
    int x = 4;
    func1(x);
}                    */

// 2nd case - Returning phase - Head Recursion

void func1(int n)
{

    if (n > 0)
    {
        func1(n - 1);
        cout << n;
    }
}
int main()
{
    int x = 4;
    func1(x);
}

//General case

/*void func1(int n)
{

    if (n > 0)
    {
        Ascending  1.Calling
                   2.func1(n - 1);
        Descending 3.Returning
    }
}  */

//Loop vs Recursion
// Loops has only calling phase
// Recursion has both phases