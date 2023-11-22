#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * left;
    Node * right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert(Node *& root, int data) {
    if (root == NULL) {
        Node * newNode = new Node(data);
        root = newNode;
    }
    else if (data <= root->data) 
        insert(root->left, data);
    else 
        insert(root->right, data);
}
Node* search(Node * root, int key) {
    if (root == NULL || root->data == key) 
        return root;
    if (key <= root->data) 
        return search(root->left, key);
    else 
        return search(root->right, key);
}
int main() {
    int key = 7;
    Node * root = new Node(50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    key = 6;
    cout << key << (search(root, key) == NULL ? " not" : "") << " found" << endl;
    key = 60;
    cout << key << (search(root, key) == NULL ? " not" : "") << " found" << endl;
    return 0;
}