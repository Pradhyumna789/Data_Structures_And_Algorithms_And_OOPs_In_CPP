void replaceWithDepthValueHelper(TreeNode<int> *root, int depth) {
    
    root -> data = depth;
    
    for (int i = 0; i < root -> children.size(); i++) {
        
        replaceWithDepthValueHelper(root -> children[i], depth + 1);
        
    }
    
}


void replaceWithDepthValue(TreeNode<int> *root) {
    
    if (root == NULL) {
        
        return;
        
    }
    
    replaceWithDepthValueHelper(root, 0);
    
    
}