---------------------------------------------------------------------------------------

You are given an integer N. Print numbers from N to 1 without the help of loops.

---------------------------------------------------------------------------------------

Examples:
1/ Input: N = 5
Output: 5 4 3 2 1
Explanation: We have to print numbers from 5 to 1.
2/ Input: N = 10
Output: 10 9 8 7 6 5 4 3 2 1
Explanation: We have to print numbers from 10 to 1.

---------------------------------------------------------------------------------------

Approach: If we take a look at this problem carefully, we can see that the idea of “loop” is to track some counter value, e.g., “i = 0” till “i <= 100”. So, if we aren’t allowed to use loops, how can we track something?

Well, one possibility is the use of ‘recursion‘, provided we use the terminating condition carefully. Here is a solution that prints numbers using recursion. 

---------------------------------------------------------------------------------------