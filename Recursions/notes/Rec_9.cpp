//power of number

/*
pow(m.n) = (m*m*m*m*.....n-1 times)*m
pow(m,n) = pow(m,n-1)*m
*/
#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

// above func takes n calls and multiplies number n times.
//we can reduce no.of multiplications in following way:

int powfast(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return pow(m * m, (n - 1) / 2) * m;
    }
}

// 2^8 = (2^2)^4 reduces number of multiplication from 8 to 5
// 2^9 = 2*(2^2)^4

int main()
{
    cout << pow(2, 8) << endl;
    cout << pow(2, 9) << endl;
    return 0;
}