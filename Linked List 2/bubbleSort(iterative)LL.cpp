/*

Time - O(N)
Space - O(1)

N - length of the singly linked list

Bubble Sort (Iterative) LinkedList
Send Feedback
Given a singly linked list of integers, sort it using 'Bubble Sort.'
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
Input format :
The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format :
For each test case/query, print the elements of the sorted singly linked list.

Output for every test case will be printed in a seperate line.
Constraints :
0 <= M <= 10^3
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 Sample Input 2 :
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 

*/

//bubble sort iterative
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

int length(Node *head) {

if(head == NULL) {

    return 0;

}

Node *temp = head;
int size = 1 + length(temp -> next);
return size;

}


Node *bubbleSort(Node *head) {

    for(int i = 0; length(head) > i; i++) {

        Node *prev = NULL, *curr = head;
        while(curr -> next != NULL) {

            if(curr -> data > curr -> next -> data) {

                if(prev != NULL) {

                    Node *temp = curr -> next -> next;
                    curr -> next -> next = curr;
                    prev -> next = curr -> next;
                    curr -> next = temp;
                    prev = prev -> next;

                }

                else {

                    head = curr -> next;
                    curr -> next = head -> next;
                    head -> next = curr;
                    prev = head;

                }

            }

            else {

                prev = curr;
                curr = curr -> next;

            }

        }

   }

   return head;

}

int main()
{
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}