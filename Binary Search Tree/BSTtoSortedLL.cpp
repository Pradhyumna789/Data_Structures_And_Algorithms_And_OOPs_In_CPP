#include <iostream>
#include <queue>

template <typename T>
class Node {
   public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}



class Base {

public:

Node<int> *head;
Node<int> *tail;

Base() {

head = NULL;
tail = NULL;

}


};


Base constructLinkedListHelper(BinaryTreeNode<int> *root) {

Base combinedList;

if (root == NULL) {

return combinedList;

}

Base leftList = constructLinkedListHelper(root -> left);
Base rightList = constructLinkedListHelper(root -> right);
Node<int> *newNode = new Node<int(root -> data);

if (leftList.tail != NULL) {

leftList.tail -> next = newNode;

}

newNode -> next = rightList.head;

if (leftList.head != NULL) {

combinedList.head = leftList.head;

}

else {

combinedList.head = newNode;

}

if (rightList.tail != NULL) {

combinedList.tail = rightList.tail;

}

else {

combinedList.tail = newNode;

}

}


Node<int> *constructLinkedList(BinaryTreeNode<int> *root) {

Base list = constructLinkedListHelper(root);
return list.head;

}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}