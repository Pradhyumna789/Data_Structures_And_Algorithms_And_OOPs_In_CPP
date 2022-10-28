#include<iostream>
#include "BinaryTreeNode.h" // We will continue using this file as BinaryTreeNode.h from this program onwards

void printTree(BinaryTreeNode<int> *root) {

if (root == NULL) {

return;

}

cout << root -> data << ":";

if (root -> left != NULL) {

cout << "L " << root -> left -> data;

}

if (root -> right != NULL) {

cout << "R" << root -> right -> data;

}

cout << endl;

printTree(root -> left);
printTree(root -> right);

}

BinaryTreeNode<int> *takeInput() { // level wise

int rootData;
cout << "Enter root data" << endl;
cin >> rootData;

if (rootData == -1) {

return NULL;

}

BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

queue<BinaryTreeNode<int>*> pendingNodes;
pendingNodes.push(root);

while (pendingNodes.size() != 0) {

BinaryTreeNode<int> *front = pendingNodes.front();
pendingNodes.pop();

cout << "Enter left child of " << front -> data << endl;
int leftChildData;
cin >> leftChildData;

if (leftChildData != -1) {

BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
front -> left = child;
pendingNodes.push(child);

}

}

while (pendingNodes.size() != 0) {

BinaryTreeNode<int> *front = pendingNodes.front();
pendingNodes.pop();

cout << "Enter left child of " << front -> data << endl;
int leftChildData;
cin >> leftChildData;

if (leftChildData != -1) {

BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
front -> left = child;
pendingNodes.push(child);

}

}

while (pendingNodes.size() != 0) {

BinaryTreeNode<int> *front = pendingNodes.front();
pendingNodes.pop();

cout << "Enter right child of " << front -> data << endl;
int rightChildData;
cin >> rightChildData;

if (rightChildData != -1) {

BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
front -> right = child;
pendingNodes.push(child);

}

}

return root;

}

/*
BinaryTreeNode<int> *takeInputRecursively() {

int rootData;
cout << "Enter data" << endl;
cin >> rootData;

BinaryTreeNode<int> *root = BinaryTreeNode<int>(rootData);
BinaryTreeNode<int> *leftChild = takeInput();
BinaryTreeNode<int> *rightChild = takeInput();

root -> left = leftChild;
root -> right = rightChild;

return root;

*/

int main() {

BinaryTreeNode<int> *root = takeInput();
printTree(root);
delete root;

}


/*

Input

Enter root data
1
Enter left child of 1
2
Enter right child of 1
3
Enter left child of 2
4
Enter right child of 2
5
Enter left child of 3
6
Enter right child of 3
7
Enter left child of 4
-1
Enter right child of 4
-1
Enter left child of 5
8
Enter right child of 5
9
Enter left child of 6
-1
Enter right child of 6
-1
Enter left child of 7
-1
Enter right child of 7
-1
Enter left child of 8
-1
Enter right child of 8
-1
Enter left child of 9
-1
Enter right child of 9
-1

output
1: L2 R3
2: L4 R5
4:
5: L8 R9
8:
9:
3: L6 R7
6:
7:


*/





















