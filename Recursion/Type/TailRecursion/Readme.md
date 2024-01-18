-------------------------------------------------------------------------------------

1. What is Tail Recursion?
Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function. So basically nothing is left to execute after the recursion call.

-------------------------------------------------------------------------------------

2. Need for Tail Recursion:
- The tail recursive functions are considered better than non-tail recursive functions as tail-recursion can be optimized by the compiler.

- Compilers usually execute recursive procedures by using a stack. This stack consists of all the pertinent information, including the parameter values, for each recursive call. When a procedure is called, its information is pushed onto a stack, and when the function terminates the information is popped out of the stack. Thus for the non-tail-recursive functions, the stack depth (maximum amount of stack space used at any time during compilation) is more. 

- The idea used by compilers to optimize tail-recursive functions is simple, since the recursive call is the last statement, there is nothing left to do in the current function, so saving the current function’s stack frame is of no use (See this for more details).

-------------------------------------------------------------------------------------

3. Can a non-tail-recursive function be written as tail-recursive to optimize it?
- Consider the following function to calculate the factorial of n. 

+ It is a non-tail-recursive function. Although it looks like a tail recursive at first look. If we take a closer look, we can see that the value returned by fact(n-1) is used in fact(n). So the call to fact(n-1) is not the last thing done by fact(n).

+ The above function can be written as a tail-recursive function. The idea is to use one more argument and accumulate the factorial value in the second argument. When n reaches 0, return the accumulated value.

-------------------------------------------------------------------------------------