#include<vector>
#include<queue>

int getHeight(TreeNode<int>* root) {
    
if (root == NULL) {
    
return 0;
    
} 

int ans = 0;

for (int i = 0; i < root -> children.size(); i++) {
    
int childHeight = getHeight(root -> children[i]);
    
    if (childHeight > ans) {
        
        ans = childHeight;
        
    }
    
}

    return ans + 1;
    
}