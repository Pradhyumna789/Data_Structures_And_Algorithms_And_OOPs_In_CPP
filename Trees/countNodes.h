#include <vector>
#include <queue>

int numNodes (TreeNode<int>* root) {

int ans = 1;

for (int i = 0; i < root -> children.size(); i++) {

ans += numnodes(root -> children[i]);

}

return ans;

}