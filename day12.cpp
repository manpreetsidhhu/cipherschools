#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    Node* head = nullptr;
    int choice, value;

    cout << "Choose an operation:\n1. Insert at End\n2. Print Linked List\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the value to insert: ";
        cin >> value;
        insertAtEnd(head, value);
        cout << "Value inserted." << endl;
    } 
    else if (choice == 2) {
        if (head == nullptr) {
            cout << "Linked list is empty." << endl;
        } else {
            cout << "Linked list: ";
            printLinkedList(head);
        }
    } 
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
