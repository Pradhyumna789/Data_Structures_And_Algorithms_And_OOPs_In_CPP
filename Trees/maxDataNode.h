

TreeNode<int>* maxDataNode (TreeNode<int>* root) {
    
if (root == NULL) {

return root;
    
}
    
TreeNode<int>* max = root;
    
for (int i = 0; i < root -> children.size(); i++) {
    
TreeNode<int>* maxChild = maxDataNode(root -> children[i]); 
    
    if (maxChild -> data > max -> data) {
        
        max = maxChild;
        
    }
    
}
    
    return max;
    
    
}