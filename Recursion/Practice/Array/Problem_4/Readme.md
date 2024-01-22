---------------------------------------------------------------------------------------------------

Given an array of integers arr, the task is to find the minimum and maximum element of that array using recursion.

---------------------------------------------------------------------------------------------------

Examples : 
1. Input: arr = {1, 4, 3, -5, -4, 8, 6};
Output: min = -5, max = 8
2. Input: arr = {1, 4, 45, 6, 10, -8};
Output: min = -8, max = 45

---------------------------------------------------------------------------------------------------

Approach:
+ Get the array for which the minimum is to be found
+ Recursively find the minimum according to the following: 
+ Recursively traverse the array from the end

---------------------------------------------------------------------------------------------------

Base case: If the remaining array is of length 1, return the only present element i.e. arr[0] 
if(n == 1)
   return arr[0];
Recursive call: If the base case is not met, then call the function by passing the array of one size less from the end, i.e. from arr[0] to arr[n-1].
Return statement: At each recursive call (except for the base case), return the minimum of the last element of the current array (i.e. arr[n-1]) and the element returned from the previous recursive call. 
    return min(arr[n-1], recursive_function(arr, n-1));
Print the returned element from the recursive function as the minimum element

---------------------------------------------------------------------------------------------------