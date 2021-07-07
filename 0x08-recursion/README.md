Recursion is expressing an entity in terms of itself. In C programming, recursion is achieved using functions known as recursive function. Recursive functions are very powerful in solving and expressing complex mathematical problems.

Until now, we called a function from another function. However, C language allows a function to call itself known as Recursive function.

In above example, main() function is executed first, it calls recursive_function(). The recursive_function() executes some code and call itself. The process continues i.e. calling of recursive_function() function from recursive_function() itself and behaves as an infinite loop. Finally, execution of above program terminates in a crash.
How recursion works?
In C programming, every function call causes C runtime to load function local variables and return address to caller function on stack (memory). Each recursive call will load a fresh copy of local variables and return address to stack.

In above recursive_function() there is no local variable, however return address to caller function is loaded to stack for each function call.

Since memory is a limited resource, loading of return addresses indefinitely will result in memory shortage. In this situation, OS will either allocate more memory for our program or will terminate the program abnormally. Which is what happened in our first recursive program.

A function must not go in indefinite recursion. Every recursive function must have a base condition to terminate (similar to the loop termination condition).

For example, let us redefine our first recursive function with a base condition and a meaningful example.

/**
 * Recursive function to print n natural numbers in reverse
 */

#include <stdio.h>

void print(int n);

int main()
{
    print(5);

    return 0;
}

void print(int n)
{
    /* Print the current value of n */
    printf("%d ", n);

    /* Base condition to terminate recursion */
    if(n <= 1) 
    {
        /* Return and make no more recursive call */
        return;
    }

    /* Call print() function recursively with n-1 */
    print(n - 1); 
}

Let us take a note on above program.

The program execution starts from main() function. It calls print() function with n=5.
Inside the print() function the first statement prints value of n (i.e. 5 for first function call).
After printing the value of n, a condition is checked if(n <= 1), then terminate from the function without executing below tasks.
If the condition (n <= 1) is false, then a recursive call to print() function is made with decreased value of n (i.e. 4 if n=5).
print() function is executed again with n=4 and step 2 to 4 is repeated till n=1.

https://codeforwin.org/2017/09/recursion-c-programming.html
