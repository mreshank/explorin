// Stack Implimentation using Singly Linked List
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int n) {
		this->data = n;
		this->next = NULL;
	}
};
class Stack {
	Node* top;
public:
	Stack() { top = NULL; }
	bool isEmpty() { return top == NULL; }
	void push(int data)
	{
		Node* temp = new Node(data);
		if (!temp) {
			cout << "\nStack Overflow";
			exit(1);
		}
		temp->data = data;
		temp->next = top;
		top = temp;
	}
	int peek()
	{
		if (!isEmpty()) return top->data;
		cout << "Stack Empty" << endl;
		return -1;
	}
	void pop()
	{
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			exit(1);
		}
		temp = top;
		top = top->next;
		free(temp);
	}
	void display()
	{
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow";
			exit(1);
		}
		temp = top;
		while (temp != NULL) {
			cout << temp->data;
			temp = temp->next;
			if (temp != NULL)
				cout << ", ";
		}
	}
};
int main()
{
    int ch, temp;
	Stack s;
	while(true) {
	    cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. IsEmpty ?\n-> Enter your choise : ";
	    cin >> ch;
	    switch (ch) {
	        case 1: 
	            cout << "\nEnter Data : "; 
	            cin >> temp; 
	            s.push(temp);
	            break;
	        case 2:
	            s.pop();
	            break;
	        case 3:
	            cout << "Top Element : " << s.peek();
	            break;
	        case 4:
                cout << "Current Stack is : ";
	            s.display();
	            break;
	        case 5:
	            cout << (s.isEmpty() ? "Yes" : "No") << endl;
	            break;
            default:
                cout << "Want to exit? enter y OR Y OR 1 : ";
                char ctemp;
                cin >> ctemp;
                if(ctemp == 'y' || ctemp == 'Y' || ctemp == '1') {
                    cout << "Exit Successfull!";
                    exit(0);
                } cout << "Exit Terminated! (unsuccessfull)...";
                break;
	    }
	}
	return 0;
}