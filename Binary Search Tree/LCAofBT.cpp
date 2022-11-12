BinaryTreeNode<int> *getLCAHelper(BinaryTreeNode<int> *root, int a, int b) {

if (!root) {

return NULL;

}

if (root -> data == a || root -> data == b) {

return root;

}

BinaryTreeNode<int> *leftLCA = getLCAHelper(root -> left, a, b);
BinaryTreeNode<int> *rightLCA = getLCAHelper(root -> right, a, b);

if (leftLCA && rightLCA) {

return root;

}

if (leftLCA) {

return leftLCA;

}

return rightLCA;

}


int getLCA(BinaryTreeNode<int> *root, int a, int b) {

BinaryTreeNode<int> *node = getLCAHelper(root, a, b);

if (node != NULL) {

return node -> data;

}

else {

return -1;

}

}


















