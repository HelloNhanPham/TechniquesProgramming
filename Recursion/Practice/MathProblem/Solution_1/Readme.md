---------------------------------------------------------------------------------------

Given an integer N, the task is convert and print the binary equaiva;ent of N.

---------------------------------------------------------------------------------------

Examples: 
1/ Input: N = 13 
Output: 1101
2/ Input: N = 15 
Output: 1111

---------------------------------------------------------------------------------------

Approach Write a recursive function that takes an argument N and recursively calls itself with the value N / 2 as the new argument and prints N % 2 after the call. The base condition will be when N = 0, simply print 0 and return out of the function in that case.

---------------------------------------------------------------------------------------

Time Complexity: O(logN)
Auxiliary Space: O(logN)

---------------------------------------------------------------------------------------