#include <iostream>
using namespace std;
#define MAX_SIZE 100 // maximum size of the queue
class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}
    bool isEmpty() { return front == -1 && rear == -1; } 
    bool isFull() { return rear == MAX_SIZE - 1; } 
    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full\n";
            return;
        } else if (isEmpty()) 
            front = rear = 0;
        else rear++;
        arr[rear] = x;
    } 
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return;
        } else if (front == rear) 
            front = rear = -1;
        else front++;
    } 
    int peek() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return -1;
        } 
        return arr[front];
    } 
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        } 
        for (int i = front; i <= rear; i++) 
            cout << arr[i] << " ";
        cout << endl;
    }   
};

int main() {
    cout << "\nStudent's Name\t: Mr. Eshank Tyagi"
         << "\nYear & Section\t: 2nd Yr - A (New)"
         << "\nLab's Subject\t: D.S.A Lab"
         << "\nCode's Question\t: Queue Implementation\n";
    Queue q; 
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
    int n = sizeof(data) / sizeof(data[0]); 
    cout << "Enqueuing with elements\t: ";
    for (int i = 0; i < n; i++) { 
        cout << data[i] << " ";
        q.enqueue(data[i]);
    }
    cout << "\nFront element of Queue\t: " << q.peek() << endl; 
    cout << "Queue Before Dequeuing\t: ";
    q.display();// Display the queue
    q.dequeue();// Dequeue an element
    cout << "Queue After Dequeuing\t: ";
    q.display();// Display the queue
    return 0;
}

/*
OUTPUT :-
Student's Name  : Mr. Eshank Tyagi
Year & Section  : 2nd Yr - A (New)
Lab's Subject   : D.S.A Lab
Code's Question : Queue Implementation
Enqueuing with elements : 1 2 3 4 5 6 7 8 9 
Front element of Queue  : 1
Queue Before Dequeuing  : 1 2 3 4 5 6 7 8 9 
Queue After Dequeuing   : 2 3 4 5 6 7 8 9 
*/