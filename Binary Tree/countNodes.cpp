#include<iostream>
#include "BinaryNode.h";

int numNodes(BinaryTreeNode<int> *root) {

if (root == NULL) {

return 0;

}

return 1 + numNodes(root -> left) + numNodes(root -> right);

}


int main() {

cout << numNodes(root);
delete root;

}