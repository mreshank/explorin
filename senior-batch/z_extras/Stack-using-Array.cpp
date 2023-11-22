#include <iostream>
using namespace std;
#define MAX_SIZE 1000 // maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX_SIZE]; 
public:
    Stack() : top(-1) {}
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }
    void push(int x) { 
        if (isFull()) { 
            cout << "Error: Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }
    int pop() { 
        if (isEmpty()) { 
            cout << "Error: Stack underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek() { 
        if (isEmpty()) {
            cout << "Error: Stack underflow\n";
            return -1;
        }
        return arr[top]; 
    }
};
int main() {
    cout << "\nStudent's Name\t: Mr. Eshank Tyagi"
         << "\nYear & Section\t: 2nd Yr - A (New)"
         << "\nLab's Subject\t: D.S.A Lab"
         << "\nCode's Question\t: Stack Implementation\n";
    Stack s; 
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Pushing elements into stack\t: ";
    for (int i = 0; i < n; i++) { 
        cout << data[i] << " ";
        s.push(data[i]);
    }
    cout << "\nIs the current stack empty ?\t: " << (s.isEmpty()?"Yes":"No") << endl;
    cout << "Is the current stack full ?\t: " << (s.isFull()?"Yes":"No") << endl;
    cout << "Top element of the stack\t: " << s.peek() << endl; 
    cout << "All Elements of the stack\t: ";
    while (!s.isEmpty()) { 
        cout << s.pop() << " ";
    }
    cout << endl;
    return 0;
}

/*
OUTPUT :-
Student's Name  : Mr. Eshank Tyagi
Year & Section  : 2nd Yr - A (New)
Lab's Subject   : D.S.A Lab
Code's Question : Stack Implementation
Pushing elements into stack     : 1 2 3 4 5 6 7 8 9 
Is the current stack empty ?    : No
Is the current stack full ?     : No
Top element of the stack        : 9
All Elements of the stack       : 9 8 7 6 5 4 3 2 1 
*/