------------------------------------------------------------------------------------------

Given an integer N, recursively sum digits of N until we get a single digit.  The process can be described below

------------------------------------------------------------------------------------------

If N < 10    
    digSum(N) = N
Else         
    digSum(N) = Sum(digSum(N))

------------------------------------------------------------------------------------------

Example 1:
Input:
N = 1234
Output:
1
Explanation:
The sum of 1+2+3+4 = 10, 
digSum(x) == 10 Hence 
ans will be 1+0 = 1

Example 2:
Input:
N = 9999
Output:
9
Explanation:
Check it yourself

------------------------------------------------------------------------------------------

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

------------------------------------------------------------------------------------------

Constraints:
1 ≤ N ≤ 1000000

------------------------------------------------------------------------------------------