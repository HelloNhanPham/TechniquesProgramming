#include <iostream>
#include <queue>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
	if (!q.empty() == 0)
		return q;
	int temp = q.front();
	q.pop();
	q = reverseQueue(q);
	q.push(temp);
	return q;
}

void printQeueue(queue<int> q)
{
    cout << "Queue = ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> Queue;
    Queue.push(56);
    Queue.push(27);
    Queue.push(30);
    Queue.push(45);
    Queue.push(85);
    Queue.push(92);
    Queue.push(58);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);
    printQeueue(Queue);
    Queue = reverseQueue(Queue);
    printQeueue(Queue);
	return 0;
}