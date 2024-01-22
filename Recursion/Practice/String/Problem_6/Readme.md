----------------------------------------------------------------------------------------

Given a string str representing a string, the task is to convert the given string into an integer.

----------------------------------------------------------------------------------------

Examples:
Input: str = “1234” 
Output: 1234
Input: str = “0145” 
Output: 145

----------------------------------------------------------------------------------------

Approach: Write a recursive function that will take the first digit of the string and multiply it with the appropriate power of 10 and then add the recursive result for the substring starting at the second index. The termination condition will be when the passed string consists of a single digit. In that case, return the digit represented by the string.

----------------------------------------------------------------------------------------