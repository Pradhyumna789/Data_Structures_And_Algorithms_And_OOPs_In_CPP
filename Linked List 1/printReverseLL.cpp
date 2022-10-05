#include <iostream>
using namespace std;

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

void printReverse(Node *head) {
    // base case
    if(head == NULL) {
        return;
    }
    
   
    cout << head -> data << " "; 
    
    printReverse(head -> next);
    
}


int main()
{

		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	
	return 0;
}

