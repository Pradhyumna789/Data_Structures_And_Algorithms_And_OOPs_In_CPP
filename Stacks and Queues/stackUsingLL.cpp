#include<iostream>
using namespace std;

template<typename T>

class Node {

public:

T data;
Node<T> *next;

Node (T data) {

this -> data = data;
next = NULL;

}

};

template<typename T>

class stackUsingLL {

Node<T> *head;
int size;


public:

stackUsingLL() {

head = NULL;
size = 0;

}

int getSize() {

return size;

}

bool isEmpty() {

return size == 0; // if size = 0 returns 1 otherwise 0

}

void push() {

Node<T> *newNode = new Node<T>(element);
newNode -> next = head;
head = newNode;
size++;

}

T pop() {

if (isEmpty()) {

return 0;

}

T ans = head -> data;
Node<T> *temp = head;
head = head -> next;
delete temp;
size--;
return ans;

}

T top() {

if (isEmpty()) {

return 0;

}

return head -> data;

}


};
