Node *deleteNode(Node *head, int pos) {
    
    if(head == NULL) {
        
        return head;
        
    }
      
    if(pos == 0) {
        
        return head -> next;
        
    }
    
    int i = 0;
    Node *temp = head;
    
    while(temp != NULL && i < pos - 1) {
        
        temp = temp -> next;
        i++;
        
     }
    
    if(temp == NULL || temp -> next == NULL) {
        
        return head;
        
     }
    
    temp -> next = temp -> next -> next;
    
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

int main() {
	
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	

	return 0;
}


*/