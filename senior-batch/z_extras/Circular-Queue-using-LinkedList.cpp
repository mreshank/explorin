#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
};
class CircularQueue {
    Node * front;
    Node * rear;
    int size;
public:
    CircularQueue() { front = rear = NULL; size = 0; }
    int Size() { return size; }
    bool isEmpty() { return (front == NULL); }
    bool isFull() { return (front != NULL && rear->next == front); }
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        Node * temp = new Node;
        temp->data = item;
        temp->next = front;
        if (isEmpty()) 
            front = rear = temp;
        else {
            rear->next = temp;
            rear = temp;
        }
        size++;
    }
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int item = front->data;
        Node * temp = front;
        front = front->next;
        if (front == NULL) 
            rear = NULL;
        delete temp;
        size--;
        return item;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        } else {
        Node * temp = front;
        while (temp != rear && temp!=NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << rear->data << endl;
    }}
};

int main() {
  CircularQueue queue;

  cout << "Queue is empty: " << (queue.isEmpty() ? "Yes" : "No") << endl;
  cout << "Queue is full: " << (queue.isFull() ? "Yes" : "No") << endl;
  queue.enqueue(10);
  queue.enqueue(20);
  queue.enqueue(30);
  cout << "Queue is empty: " << (queue.isEmpty() ? "Yes" : "No") << endl;
  cout << "Queue is full: " << (queue.isFull() ? "Yes" : "No") << endl;
  cout << "Queue size: " << queue.Size() << endl;
  queue.display();
  cout << "Dequeued element: " << queue.dequeue() << endl;
  cout << "Dequeued element: " << queue.dequeue() << endl;
  cout << "Queue size: " << queue.Size() << endl;
  return 0;
}
