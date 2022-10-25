#include<climits>

template <typename T>
class MaxNodePair {
    
    public:
    int sum;
    TreeNode<T> *node;
    
    
};


MaxNodePair<int> *maxSumNodeHelper(TreeNode<int> *root) {
    
    if (root == NULL) {
        
        MaxNodePair<int> *pair = new MaxNodePair<int>();
        pair -> node = NULL;
        pair -> sum = INT_MIN;
        return pair;
        
    }
    
    int sum = root -> data;
    
    for (int i = 0; i < root -> children.size(); i++) {
        
        sum += root -> children[i] -> data;
        
    }
    
    MaxNodePair<int> *ans = new MaxNodePair<int>();
    ans -> node = root;
    ans -> sum = sum;
    
    for (int i = 0; i < root -> children.size(); i++) {
        
        MaxNodePair<int> *childAns = maxSumNodeHelper(root -> children[i]);
        
        if (childAns -> sum > ans -> sum) {
            
            ans = childAns;
            
        }
        
    }
    
    return ans;
    
}
    
    TreeNode<int> *maxSumNode(TreeNode<int> *root) {
        
        return maxSumNodeHelper(root) -> node;
        
    }
    



/*

main code to test the above code

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}

*/