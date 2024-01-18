-----------------------------------------------------------------------------------

What is Recursion? 
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. Using a recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc. A recursive function solves a particular problem by calling a copy of itself and solving smaller subproblems of the original problems. Many more recursive calls can be generated as and when required. It is essential to know that we should provide a certain case in order to terminate this recursion process. So we can say that every time the function calls itself with a simpler version of the original problem.

-----------------------------------------------------------------------------------

Need of Recursion
Recursion is an amazing technique with the help of which we can reduce the length of our code and make it easier to read and write. It has certain advantages over the iteration technique which will be discussed later. A task that can be defined with its similar subtask, recursion is one of the best solutions for it. For example; The Factorial of a number.

-----------------------------------------------------------------------------------

Properties of Recursion:
1. Performing the same operations multiple times with different inputs.
2. In every step, we try smaller inputs to make the problem smaller.
3. Base condition is needed to stop the recursion otherwise infinite loop will occur.

-----------------------------------------------------------------------------------

Algorithm: Steps
The algorithmic steps for implementing recursion in a function are as follows:
- Step1 - Define a base case: Identify the simplest case for which the solution is known or trivial. This is the stopping condition for the recursion, as it prevents the function from infinitely calling itself.
- Step2 - Define a recursive case: Define the problem in terms of smaller subproblems. Break the problem down into smaller versions of itself, and call the function recursively to solve each subproblem.
- Step3 - Ensure the recursion terminates: Make sure that the recursive function eventually reaches the base case, and does not enter an infinite loop.
- Step4 - Combine the solutions: Combine the solutions of the subproblems to solve the original problem.

-----------------------------------------------------------------------------------