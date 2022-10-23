// First way of deleting a Tree

void deleteTree(TreeNode<int>* root) {

for (int i = 0; i < root -> children[i]; i++) {

deleteTree(root -> children[i]);

}

delete root;


}


/*

In the int main() function after using the tree we
can just delete it by writing deleteTree(root);


*/


// Second way of deleting a Tree is to create our own detructor in the TreeNodeClass File

~TreeNode() {

for (int i = 0; i < root -> children.size(); i++) {

delete children[i];

}

}

