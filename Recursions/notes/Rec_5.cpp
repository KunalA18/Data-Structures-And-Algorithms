#include <iostream>
using namespace std;

//Tree Recursion

//If recursive Function is calling itself only once - Linear Recursion
//If recursive Function is calling itselfy more than once - Tree Recursion

//Example of tree recursion

void func1(int n)
{

    if (n > 0)
    {
        cout << n;
        func1(n - 1);
        func1(n - 1);
    }
}
int main()
{
    int x = 3;
    func1(x);
}

// Time complexity of this fn: O(2^n)
//Space complexity of this fn : O(n)
// Explained better in Rec_5.pdf