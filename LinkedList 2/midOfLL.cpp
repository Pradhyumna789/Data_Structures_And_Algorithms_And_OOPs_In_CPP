
Node *midPoint(Node *head) {	
   //corner case 
   if(head == NULL or head -> next == NULL) {
       return head;
   } 
    
   Node *slow = head;
   Node *fast = head -> next;
   
   while(fast and fast -> next) {
       slow = slow -> next;
       fast = fast -> next -> next;
   } 
    
   return slow;
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

int main()
{
	
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	
	return 0;
}


*/
