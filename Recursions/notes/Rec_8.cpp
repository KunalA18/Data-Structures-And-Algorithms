//factorial

#include <iostream>
using namespace std;

int fact(int n) //Recursion
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int Ifact(int n) //loop
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int r = Ifact(5);
    cout << r << endl;
    return 0;
}