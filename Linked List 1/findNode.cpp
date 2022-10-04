int findNode(Node *head, int n) {
    
    int pos = 0;
    
    while(head != NULL) {
        
        if (head -> data == n) {
            
            return pos;
            
        }
        
        head = head -> next;
        pos++;
        
    }
    
    return -1;
    
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
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	
}


*/