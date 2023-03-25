#include <iostream>
using namespace std;

class Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;
Node* tail = NULL;

void insertAtEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = tail;
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void printList() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    insertAtEnd(8);
    insertAtEnd(1);
    insertAtEnd(5);
    insertAtEnd(3);
    insertAtEnd(2);
    printList(); // Output: 8 1 5 3 2
    return 0;
}