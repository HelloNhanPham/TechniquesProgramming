----------------------------------------------------------------------------------------

Print all possible paths from top left to bottom right in matrix

----------------------------------------------------------------------------------------

Given a 2D matrix of dimension m✕n, the task is to print all the possible paths from the top left corner to the bottom right corner in a 2D matrix with the constraints that from each cell you can either move to right or down only.

----------------------------------------------------------------------------------------

Input: [[1,2,3],
[4,5,6]]
Output: [[1,4,5,6],
[1,2,5,6],
[1,2,3,6]]

Input: [[1,2],
[3,4]]
Output: [[1,2,4],
[1,3,4]]

----------------------------------------------------------------------------------------

Print all possible paths from top left to bottom right in matrix using Backtracking
Explore all the possible paths from a current cell using recursion and backtracking to reach bottom right cell.

Base cases: Check If the bottom right cell, print the current path.
Boundary cases: In case in we reach out of the matrix, return from it.
Otherwise, Include the current cell in the path
Make two recursive call:
Move right in the matrix
Move down in the matrix
Backtrack: Remove the current cell from the current path

----------------------------------------------------------------------------------------