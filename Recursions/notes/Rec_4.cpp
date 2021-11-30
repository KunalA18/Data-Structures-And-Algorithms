/* Types of Recursion

1. Tail Recursion 
2. Head Recursion
3. Tree Recursion
4. Indirect Recursion
5. Nested Recursion

*/

// Tail Recursion

// In  this the Recursive func call is at last

/*
fun (n){
    if(n>0){
        _______
        _______
        _______
        _______
        fun(n-1);
    }
}
*/

// Tail recursion vs loops

/*
void func1(int n)
{

    if (n > 0)
    {
        cout << n;
        func1(n - 1);
    }
}
*/

/*
void func1(int n)
{

    while (n > 0)
    {
        cout << n;
        n--;
    }
}
*/

// Time complexity of both: O(n)
/* Space complexity of 1. Tail Recursion : O(n) 
                       2. Loops : O(1)        */

// Since stack is used for recursion, space complexity is more
// Therefore 'Tail' recursions are mostly converted and used as loops

// Head Recursion

// In  this the Recursive func call is first
// All processing is done at returning time

/*
fun (n){
    if(n>0){

        fun(n-1);
        _______
        _______
        _______
        _______
       
    }
}
*/

// Head recursion cannot be converted identically to loops
// it can be converted to loops but not with the same logic as used in recursion function