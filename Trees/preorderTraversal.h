
void preorder(TreeNode<int>* root) {

if (root == NULL) {

return;

}

cout << root -> data << " ";

for (int i = 0; i < root -> children.size(); i++) {

preorder(root -> children[i]);

}


}