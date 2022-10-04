Node* insertNode(Node *head, int pos, int data) {
    
    if(head == NULL) {
        
        return head;
        
    }
       
    if(pos == 0) {
        
        Node *newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
        return head;
        
    }
    
    head -> next = insertNode(head -> next, pos - 1, data);
    return head;
    
}


/*

main code


#include <iostream>

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;
#include "solution.h"

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
   
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }



*/