//Taylor series
//e^x = 1 + x/1 + x^2/2! + x^3/3! +... n terms

/*
    sum(n) = sum(n-1)+n;
    fact(n) = fact(n-1)*n;
    pow(x,n) = pow(x,n-1)*n;
*/

// since recursive func can return only 1 value at a time
// make other variables 'static'

#include <iostream>
using namespace std;
double er(int x, int n) //recursion
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = er(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double el(int x, int n) //loops
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;
    for (i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

int main()
{
    cout << er(4, 15) << endl;
    cout << el(4, 15) << endl;
    return 0;
}