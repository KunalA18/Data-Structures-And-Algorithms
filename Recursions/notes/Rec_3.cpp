//Static variables in Recursion

#include <iostream>
using namespace std;

// int fun(int n)
// {

//     if (n > 0)
//     {
//         return fun(n - 1) + n;
//     }
//     return 0;
// }
// int main()
// {
//     int x = 5;
//     cout << fun(x);
// }

//output: 15

/* Dry run
  14 + 1 = 15
  12 + 2
  9 + 3
  5  + 4
  0  + 5     bottom to top
*/

//USING STATIC VARIABLE

/* Static variables are stored in code section (which has subsection for static and global variables)
It is created only 1 time during loading of program
so 'a' will be created only once in memory
*/

int fun(int n)
{
    static int a = 0;
    if (n > 0)
    {
        a++;
        return fun(n - 1) + a;
    }
    return 0;
}
int main()
{
    int x = 5;
    cout << fun(x);
}

// output: 25

/* If 'int a' is declared as global variable (outside fun()) instead of static, then also output will be same
   as 'a' is created only once
*/
/* Dry run
  20 + 5 =25
  15 + 5
  10 + 5
  5  + 5
  0  + 5     bottom to top
*/