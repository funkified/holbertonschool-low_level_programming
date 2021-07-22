Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

int check(int a, double b, ...);
Variadic functions must have at least one named parameter, so, for instance,

char *wrong(...);
is not allowed in C. (In C++, such a declaration is permitted.) In C, a comma must precede the ellipsis; in C++, it is optional.

Defining variadic functions
The same syntax is used in a definition:

long func(char, double, int, ...);

long func(char a, double b, int c, ...)
{
    /* ... */
}
An ellipsis may not appear in old-style function definitions.

stdarg.h types
Name	Description	Compatibility
va_list	type for iterating arguments	C89
stdarg.h macros
Name	Description	compatibility
va_start	Start iterating arguments with a va_list	C89
va_arg	Retrieve an argument	C89
va_end	Free a va_list	C89
va_copy	Copy contents of one va_list to another	C99

