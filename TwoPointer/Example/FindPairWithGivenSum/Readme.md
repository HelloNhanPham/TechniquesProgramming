----------------------------------------------------------------------------------

Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

----------------------------------------------------------------------------------

Illustration : 
1. A[] = {10, 20, 35, 50, 75, 80}
X = =70
i = 0
j = 5
2. A[i] + A[j] = 10 + 80 = 90
Since A[i] + A[j] > X, j--
i = 0
j = 4
3. A[i] + A[j] = 10 + 75 = 85
Since A[i] + A[j] > X, j--
i = 0
j = 3
4. A[i] + A[j] = 10 + 50 = 60
Since A[i] + A[j] < X, i++
i = 1
j = 3
m
5. A[i] + A[j] = 20 + 50 = 70
Thus this signifies that Pair is Found.

----------------------------------------------------------------------------------

Now let’s see how the two-pointer technique works. We take two pointers, one representing the first element and other representing the last element of the array, and then we add the values kept at both the pointers. If their sum is smaller than X then we shift the left pointer to right or if their sum is greater than X then we shift the right pointer to left, in order to get closer to the sum. We keep moving the pointers until we get the sum as X. 

----------------------------------------------------------------------------------