---------------------------------------------------------------------------------------------------

Given a number N. The task is to find the number of set bits in its binary representation using recursion.

---------------------------------------------------------------------------------------------------

Examples: 

1. Input : 21 
Output : 3 
21 represented as 10101 in binary representation

2. Input : 16 
Output : 1 
16 represented as 10000 in binary representation 

---------------------------------------------------------------------------------------------------

Approach:  
- First, check the LSB of the number.
- If the LSB is 1, then we add 1 to our answer and divide the number by 2.
- If the LSB is 0, we add 0 to our answer and divide the number by 2.
- Then we recursively follow step (1) until the number is greater than 0.

---------------------------------------------------------------------------------------------------