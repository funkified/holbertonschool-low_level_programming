What is function pointer?
Function pointer is a special pointer that points to a function. Yes a pointer can point to any object in C. Instead pointing at variable, a function pointer points at executable code.
We use function pointer to call a function or to pass reference of a function to another function. Which means you can pass a function to another function (using function pointers).

Syntax to declare function pointer
return-type (* function_pointer_name) (parameter_list_type);
return-type: Return type of a function.
function_pointer_name: Valid C identifier that specifies name of function pointer.
parameter_list_type: List of parameter types the function accepts.
Note: Function pointer declaration defines prototype of functions it can point. Where function pointer return type must match function return type to which it will point. Similarly parameter type must match list of parameter types of a function to which it will point.

How to declare function pointer?
int (* arith)(int, int);
The above statement declares a function pointer arith. It can point to all functions whose return type is int and accepts two integer parameters.

How to initialize function pointer?
Function pointer points to a function, means it accepts address of a function. To get address of any object in C we use address & operator. Similarly, you can also use & operator to get the address of a function.

For example,

int add(int num1, int num2)
{
    return (num1 + num2);
}

int main()
{
    int (* arith)(int, int);	// Function pointer declaration

    arith = &add; 			   // Function pointer initialization

    return 0;
}
Note: The function signature must match function pointer signature. In our case, function signature is int (int, int) and function pointer signature is int (int, int).

You can also use function name directly to get the function memory address. Hence the statement arith = &add; is equivalent to arith = add;
How to call a function using function pointer?
Calling or invoking a function using function pointer is similar to access value pointed by a pointer. To access value pointed by a pointer we use dereferencing * operator.

Syntax to call a function using function pointer
(* function-pointer)(function-parameters);
Example to call a function using function pointer
(* arith)(10, 20);
When calling a function using function pointer use of dereferencing * operator is optional. Hence (* arith)(10, 20); is equivalent to arith(10, 20);
