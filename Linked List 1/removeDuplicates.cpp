Node* removeDuplicates(Node *head) {
    
    if (head == NULL) {
        
        return head;
        
    }
    
    
    Node *currHead = head; 
    
    
    while (currHead -> next != NULL) {
        
        if (currHead -> data == currHead -> next -> data) {
            
            currHead -> next = currHead -> next -> next;
            
        }
        
        else {
            
            currHead = currHead -> next;
            
        }
        
        
    }
    
    
    return head;

    
    
}



/*

main code


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
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
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
	
		Node *head = takeinput();
		head = removeDuplicates(head);
		print(head);
	
	return 0;
}


*/