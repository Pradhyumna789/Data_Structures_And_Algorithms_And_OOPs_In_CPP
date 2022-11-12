int replaceWithLargerNodesSum(BinaryTreeNode<int> *root, int sum) {

if (root == NULL) {

return sum;

}

sum = replaceWithLargerNodesSum(root -> right, sum);

sum = sum + root -> data;
root -> data = sum;

sum = replaceWithLargerNodesSum(root -> left, sum);

}



void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {

int sum = 0;
replaceWithLargerNodesSum(root, sum);


}