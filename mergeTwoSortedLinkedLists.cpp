Node* mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    
    
    if (head1 == NULL) {
        
        return head2;
        
    }
    
    
    if (head2 == NULL) {
        
        return head1;
        
    }
    
    
    Node *newHead = NULL;
    Node *newTail = NULL;
    
    
    if (head1 -> data < head2 -> data) {
        
        newHead = head1;
        newTail = head1;
        head1 = head1 -> next;
        
    }
    
    else {
        
        newHead = head2;
        newTail = head2;
        head2 = head2 -> next;
        
    }
    
    
    while (head1 != NULL && head2 != NULL) {
        
        if (head1 -> data < head2 -> data) {
            
            newTail -> next = head1;
            newTail = newTail -> next;
            head1 = head1 -> next;
            
        }
        
        
        else {
            
            newTail -> next = head2;
            newTail = newTail -> next;
            head2 = head2 -> next;
            
            
        }
        
        
        
    }
    
    
    if (head1 != NULL) {
        
        newTail -> next = head1;
        
    }
    
    
    if(head2 != NULL) {
        
        newTail -> next = head2;
        
    }
    
    return newHead;
    
    
}


/* main code


#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}



*/
