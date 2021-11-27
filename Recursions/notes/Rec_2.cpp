/* For n calls of recursive function
1. n+1 activation records are created in stack
2. Memory consumed = O(n)
*/

// Time complexity of Recursion : O(n)

//Example of Finding Time Complexity

/*
    T(n).....void func1(int n)
            {
    1............if (n > 0)
                {
    1............ cout << n;
    T(n-1)....... func1(n - 1);
                }
            }

Total time taken: T(n) = T(n-1) + 2

T(n) = | 1           n=0
       |
       | T(n-1) + 1  n>0   (considering 2 from above as 1(a constant))

T(n) = T(n-1) + 1
T(n) = T(n-2) + 2      (T(n-1) = T(n-2) + 1)
T(n) = T(n-3) + 3
.
.
.
T(n) = T(n-k) + k

Assuming n-k=0   therefore n=k

T(n) = T(n-n) + n
T(n) = T(0) + n
T(n) = 1 + n  ......... O(n) (order of n)

*/