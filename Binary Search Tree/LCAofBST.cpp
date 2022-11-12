BinaryTreeNode<int> *getLCAHelper(BinaryTreeNode<int> *root, int a, int b) {

if (root == NULL || root -> data == a || root -> data == b) {

return root;

}

if (root -> data < a && root -> data < b) {

return getLCAHelper(root -> right, a, b);

}

else if (root -> data > a && root -> data > b) {

return getLCAHelper(root -> left, a, b);

}

BinaryTreeNode<int> *leftLCA = getLCAHelper(root -> left, a, b);
BinaryTreeNode<int> *rightLCA = getLCAHelper(root -> right, a, b);

if (leftLCA != NULL && rightLCA != NULL) {

return root;

}

else if (leftLCA != NULL) {
    
return leftLCA;

}

return rightLCA;

}


int getLCA(BinaryTreeNode<int> *root, int a, int b) {

BinaryTreeNode<int> *node = getLCAHelper(root, a, b);

return (node == NULL) ? -1 : node -> data;

}