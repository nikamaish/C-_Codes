
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);
    if (head == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void deleteFromHead(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete from the beginning.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    temp->next = NULL;
    delete temp;
    cout << "Node deleted from the beginning.\n";
}

void deleteFromTail(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete from the end.\n";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = tail = NULL;
        cout << "Node deleted from the end.\n";
        return;
    }
    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
    cout << "Node deleted from the end.\n";
}

void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int choice, value;
    do {
        cout << "\nChoose an operation:\n"
             << "1. Insert at beginning\n"
             << "2. Insert at end\n"
             << "3. Delete from beginning\n"
             << "4. Delete from end\n"
             << "5. Display\n"
             << "6. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                insertAtHead(head, value);
                break;
            case 2:
                cout << "Enter the value to insert: ";
                cin >> value;
                insertAtTail(head, tail, value);
                break;
            case 3:
                deleteFromHead(head, tail);
                break;
            case 4:
                deleteFromTail(head, tail);
                break;
            case 5:
                display(head);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
    return 0;
}
