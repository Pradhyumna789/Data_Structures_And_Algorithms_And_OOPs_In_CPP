#include <vector>
#include <queue>

void printAtLevelK(TreeNode<int>* root, int k) {

if (root == NULL) {

return;

}

if (k == 0) {

cout << root -> data << endl;
return;

}

for (int i = 0; i < root -> children.size(); i++) {

printAtLevelK(root -> children[i], k - 1);

}


}
