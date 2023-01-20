#include<vector>

void rootToLeafPathsSumToKHelper(BinaryTreeNode<int> *root, vector<int> &path, int k) {

if (root == NULL) {

return;

}

k = k - root -> data;
path.push_back(root -> data);


if (root -> left == NULL && root -> right == NULL) {

if (k == 0) {

for (int i = 0; i < path.size(); i++) {

cout << path[i] << " ";

}

cout << endl;

}

path.pop_back();
return;

}

rootToLeafPathsSumToKHelper(root -> left, path, k);
rootToLeafPathsSumToKHelper(root -> right, path, k);

path.pop_back();

}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {

vector<int> path;
rootToLeafPathsSumToKHelper(root, path, k);


}
