--------------------------------------------------------------------------------------

Given an array of random numbers, Push all the zero’s of the given array to the end of the array. For example, if the given arrays is {1, 0, 2, 6, 0, 4}, it should be changed to {1, 2, 6, 4, 0, 0}. The order of all other elements should be the same.

--------------------------------------------------------------------------------------

Examples: 

Input: arr[]={8, 9, 0, 1, 2, 0, 3}
Output: arr[]={8, 9, 1, 2, 3, 0, 0}
Explanation: 
Swap {0 ,1} -> Resulting array {8, 9, 1, 0, 2, 0, 3}
Swap {0 ,2} -> Resulting array {8, 9, 1, 2, 0, 0, 3}
Swap {0 ,3} -> Final array {8, 9, 1, 2, 3, 0, 0}

Input: arr[]={4, 5, 0, 0, 0, 0, 6, 7}
Output: arr[]={4, 5, 6, 7, 0, 0, 0, 0}
 
--------------------------------------------------------------------------------------

Approach: 
1. Iterate the array from 0 to N. 
2. Keep two pointers, one for zero elements and other for non-zero elements. 
3. Swap every zero elements with the non-zero element that comes just after it. 

--------------------------------------------------------------------------------------