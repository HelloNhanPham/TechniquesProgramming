---------------------------------------------------------------------------------------------------

Example: Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.

1. Input  : arr[] = {100, 200, 300, 400}, k = 2
Output : 700

2. Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.

3. Input  : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.

---------------------------------------------------------------------------------------------------

Applying the sliding window technique : 
1. We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window_sum.
2. Then we will graze linearly over the array till it reaches the end and simultaneously keep track of the maximum sum.
3. To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.

---------------------------------------------------------------------------------------------------