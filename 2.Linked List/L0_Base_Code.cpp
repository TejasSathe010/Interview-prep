#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList {
    public:
        Node* head;

    LinkedList() {
        head = NULL;
    }

    Node* createNewNode(int data) {

        return new Node(data);
    }

    void prepend(int data) {
        Node* newNode = createNewNode(data);
        // if(head == NULL) {
        //     head = newNode;
        //     return;
        // }
        newNode->next = head;
        head = newNode;
        return;
    }

    void append(int data) {
        Node* newNode = createNewNode(data);
        if(head == NULL) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        return;
    }

    void printList() {
        Node *temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main() {
    LinkedList ll;

    ll.append(10);
    ll.append(13);
    ll.append(16);
    ll.append(19);
    ll.prepend(1);
    ll.printList();
}