void printIthNode(Node *head, int i) {
    
    
    int position = 0;
    Node *temp = head;
    
    while(position < i && temp != NULL) {
        
        position++;
        temp = temp -> next;
        
    }
    
    if(temp != NULL) {
        
        cout << temp -> data << endl;
        
    }
    
    
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

int main()
{
	
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	
	return 0;
}

*/