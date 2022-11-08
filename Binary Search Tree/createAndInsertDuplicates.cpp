void insertDuplicateNode(BinaryTreeNode<int> *root) {

  if (root == NULL) {

    return;
  }

  BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root -> data);
  BinaryTreeNode<int> *rootLeft = root->left;

  root->left = newNode;
  newNode->left = rootLeft;

  insertDuplicateNode(rootLeft);
  insertDuplicateNode(root->right);
}