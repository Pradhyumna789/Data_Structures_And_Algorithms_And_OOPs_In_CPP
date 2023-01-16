/* 

Time - O(n)
Space - O(1)
n - size of the singly linked list

Palindrome LinkedList
Send Feedback
You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains the the elements of the singly linked list separated by a single space.
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
 Output format :
For each test case, the only line of output that print 'true' if the list is Palindrome or 'false' otherwise.
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.
Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
true
Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.

*/

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

Node *reverseLinkedList(Node *head) {

  Node *curr = head;
  Node *prev = NULL;
  Node *fwd = NULL;

  while (curr != NULL) {

    fwd = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fwd;
  }

  return prev;
}

bool isPalindrome(Node *head) {

  if (head == NULL || head->next == NULL) {

    return true;
  }

  Node *fast = head;
  Node *slow = head;

  while (fast->next != NULL && fast->next->next != NULL) {

    fast = fast->next->next;
    slow = slow->next;
  }

  Node *secondHead = slow->next;
  slow->next = NULL;
  secondHead = reverseLinkedList(secondHead);

  // Compare the two sublists
  Node *firstSubList = head;
  Node *secondSubList = secondHead;

  bool ans = true;

  while (secondSubList != NULL) {

    if (firstSubList->data != secondSubList->data) {

      ans = false;
      break;
    }

    firstSubList = firstSubList->next;
    secondSubList = secondSubList->next;
  }

  // Rejoin the two subLists
  firstSubList = head;
  secondSubList = reverseLinkedList(secondHead);

  while (firstSubList->next != NULL) {

    firstSubList = firstSubList->next;
  }

  firstSubList->next = secondSubList;

  return ans;
}

// Driver Code

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}