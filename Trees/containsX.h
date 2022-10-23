bool isPresent(TreeNode<int>* root, int x) {
    
    if (root -> data == x) {
        
        return true;
        
    }
    
    for (int i = 0; i < root -> children.size(); i++) {
        
        bool ans = isPresent(root -> children[i], x);
        
        if (ans == true) {
            
            return true;
            
        }
        
    }
    
    return false;
    
}