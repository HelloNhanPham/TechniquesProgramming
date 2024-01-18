-----------------------------------------------------------------------------------

Window Sliding Technique is a computational technique that aims to reduce the use of nested loops and replace it with a single loop, thereby reducing the time complexity.

-----------------------------------------------------------------------------------

What is a Sliding Window?
=> Consider a long chain connected together. Suppose you want to apply oil in the complete chain with your hands, without pouring the oil from above.

-----------------------------------------------------------------------------------

One way to do so is to:
1. pick some oil, 
2. apply onto a section of the chain, 
3. then again pick some oil
4. then apply it to the next section where oil is not applied yet
and so on till the complete chain is oiled.
5. Another way to do so is to use a cloth, dip it in oil, and then hold onto one end of the chain with this cloth. Then instead of re-dipping it again and again, just slide the cloth with your hand onto the next section, and next, and so on till the other end.

-------------------------------------------------------------------------------------------------------

The second way is known as the Sliding window technique and the portion which is slid from one end to end is known as Sliding Window.

-------------------------------------------------------------------------------------------------------

Prerequisite to use the Sliding window technique
+ The use of the Sliding Window technique can be done in a very specific scenario, where the size of the window for computation is fixed throughout the complete nested loop. Only then the time complexity can be reduced. 

-------------------------------------------------------------------------------------------------------

How to use Sliding Window Technique?
1. The general use of the Sliding window technique can be demonstrated as follows:
2. Find the size of the window required 
3. Compute the result for 1st window, i.e. from the start of the data structure
4. Then use a loop to slide the window by 1, and keep computing the result window by window.

-------------------------------------------------------------------------------------------------------

How to Know, Where we use the Sliding Window?
=> To know, Where we use the Sliding Window then we remember the following terms which is mentioned below:
Array, String, Sub Array, Sub String, Largest Sum, Maximum Sum, Minimum Sum

-------------------------------------------------------------------------------------------------------