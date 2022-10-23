#include <vector>
#include <queue>

int sumOfNodes (TreeNode<int>* root) {

int sum = root -> data; // the initial sum

for (int i = 0; i < root -> children.size(); i++) {

sum += sumOfNodes(root -> children[i]);

}

return sum;


}