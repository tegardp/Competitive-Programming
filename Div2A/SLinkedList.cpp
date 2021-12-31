#include <iostream>

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class SLinkedList {
    Node *head;

public:
    SLinkedList() {
        head = NULL;
    }

    void insertNode(int, int);
    
    void printList();

    void deleteNode(int);

    void reverseList();
};

void SLinkedList::insertNode(int data, int n) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (n == 1) {
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

void SLinkedList::printList() {
    Node *temp = head;
    if (temp == NULL) {
        std::cout<<"List is empty"<<"\n";
    }
    while(temp != NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void SLinkedList::deleteNode(int n) {
    Node *temp = head;
    if (n == 1) {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < n - 2; i++)
        temp = temp->next;
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

void SLinkedList::reverseList() {
    Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main() {
    SLinkedList list;
    list.insertNode(4,1); // 4
    list.insertNode(3,2); // 4 3
    list.insertNode(5,1); // 5 4 3
    list.insertNode(2,2); // 5 2 4 3
    list.reverseList();
    list.printList();
}