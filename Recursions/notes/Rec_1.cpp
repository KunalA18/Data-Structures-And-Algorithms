#include <iostream>
using namespace std;
//Example

// 1st case - Calling phase

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

// 2nd case - Returning phase

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