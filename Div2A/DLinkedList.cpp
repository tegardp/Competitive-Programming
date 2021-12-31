#include <iostream>

class Node{
public:
    int data;
    Node *prev, *next;

    Node () {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node (int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DLinkedList {
    Node *head;
public:
    DLinkedList() {
        head = NULL;
    };

    void insertAtHead(int);

    void insertAtTail(int);

    void printList();

    void reversePrint();
};

void DLinkedList::insertAtHead(int data) {
    Node *temp = new Node(data);
    if (head == NULL) {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
};

void DLinkedList::insertAtTail(int data) {

};

void DLinkedList::printList() {
    Node *temp = head;
    if(temp == NULL) return;
    while(temp != NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void DLinkedList::reversePrint() {
    Node *temp = head;
    if(temp == NULL) return;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    while(temp != NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->prev;
    }
}

int main() {
    DLinkedList list;

    list.insertAtHead(2);
    list.insertAtHead(1);
    list.insertAtHead(2);
    list.insertAtHead(1);
    //list.insertAtTail(3);
    list.printList();
    list.reversePrint();
}