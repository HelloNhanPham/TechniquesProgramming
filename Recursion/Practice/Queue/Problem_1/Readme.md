----------------------------------------------------------------------------------------

Given a queue, write a recursive function to reverse it. 

----------------------------------------------------------------------------------------

Standard operations allowed : 
enqueue(x) : Add an item x to rear of queue. 
dequeue() : Remove an item from front of queue. 
empty() : Checks if a queue is empty or not.

----------------------------------------------------------------------------------------

1. Input : Q = [5, 24, 9, 6, 8, 4, 1, 8, 3, 6]
Output : Q = [6, 3, 8, 1, 4, 8, 6, 9, 24, 5]
Explanation : Output queue is the reverse of the input queue.

2. Input : Q = [8, 7, 2, 5, 1]
Output : Q = [1, 5, 2, 7, 8]

----------------------------------------------------------------------------------------

Recursive Algorithm : 
1. The pop element from the queue if the queue has elements otherwise return empty queue.
2. Call reverseQueue function for the remaining queue.
3. Push the popped element in the resultant reversed queue.

----------------------------------------------------------------------------------------

Pseudo Code : 
queue reverseFunction(queue)
{
    if (queue is empty)
       return queue;
    else {
       data = queue.front()
       queue.pop()
       queue = reverseFunction(queue);
       q.push(data);
       return queue;
    }
}

----------------------------------------------------------------------------------------