#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev, *next;
    Node(int in) : data(in), prev(NULL), next(NULL) {}
};
// Operation on Begin's
class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}
    void insertAtBegin(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        if (head != nullptr) 
            head->prev = newNode;
        head = newNode;
    }
    void deleteAtBegin() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        delete temp;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting nodes
    dll.insertAtBegin(5);
    dll.insertAtBegin(10);
    dll.insertAtBegin(15);
    dll.insertAtBegin(20);

    // Displaying the list
    cout << "Doubly Linked List: ";
    dll.display();

    // Deleting a node
    dll.deleteAtBegin();
    dll.deleteAtBegin();

    // Displaying the updated list
    cout << "Updated Doubly Linked List: ";
    dll.display();

    return 0;
}
