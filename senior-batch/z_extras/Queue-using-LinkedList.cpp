#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};  

struct Queue {
	Node *front, *rear;
	Queue() { front = rear = NULL; }
	void enQueue(int x)
	{
		Node* temp = new Node(x);
		if (rear == NULL) {
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}
	void deQueue()
	{
		if (front == NULL)
			return;
		Node* temp = front;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		delete (temp);
	}
};

int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}
