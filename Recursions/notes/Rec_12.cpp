//pnc formula
//nCr = n!/(r!*(n-r)!)
//Implementation using Pascal's triangle
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int nCr(int n, int r) //another form
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}
int NCR(int n, int r) // main Recursion
{
    if (n == r || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    cout << NCR(5, 3) << endl;
    return 0;
}
