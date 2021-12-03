#include <iostream>
using namespace std;

// INDIRECT RECURSION

//Function call is in cyclic manner

/*void A(int n){
    if(.....){
        ______ 
        ______ 
        B(n-1);
    }
}
void B(int n){
    if(.....){
        ______ 
        ______              
        A(n-2);          A-->B-->A
    }
}   */

// void funB(int);

void funA(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        cout << n;
        funA(n / 2);
    }
}
int main()
{
    funA(20);
    return 0;
}

//Nested Recursion

//Recursive function call takes recursive func as parameter

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n + 11));
    }
}
int main()
{
    int r;
    r = fun(95);
    cout << r;
    return 0;
}

//func call in nested recursion

/*
fun(95) = 91
   |
fun(fun(95+11)) ---> fun(106)=96
   ||
fun(96)
   |
fun(fun(96+11)) ---> fun(107)=97
   ||
fun(97)
   |
fun(fun(97+11)) ---> fun(108)=98
   ||
fun(98)
   |
fun(fun(98+11)) ---> fun(109)=99
   ||
fun(99)
   |
fun(fun(99+11)) ---> fun(110)=100
   ||
fun(100)
   |
fun(fun(100+11)) ---> fun(111)=101
   ||
fun(101) ==== 91 (Output)
*/