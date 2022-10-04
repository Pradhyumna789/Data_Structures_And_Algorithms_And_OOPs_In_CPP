int length(Node *head) {
    
    int len = 0;
    Node *temp = head;
    
    while (temp != NULL) {
        
        len++;
        temp = temp -> next;
        
        
    }
      
    return len;
    
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
	int t;
	cin >> t;
	
		Node *head = takeinput();
		cout << length(head) << endl;
	
	return 0;
}


*/