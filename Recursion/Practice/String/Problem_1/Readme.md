-------------------------------------------------------------------------------------

1. Introduce
The atoi() function takes a string (which represents an integer) as an argument and returns its value. We have discussed iterative implementation of atoi(). How to compute recursively?

-------------------------------------------------------------------------------------

2. Approach:
The idea is to separate the last digit, recursively compute the result for the remaining n-1 digits, multiply the result by 10 and add the obtained value to the last digit. 

-------------------------------------------------------------------------------------