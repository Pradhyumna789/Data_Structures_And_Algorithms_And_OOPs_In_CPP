#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

class BalancedReturnType {

public:

int height;
bool balanced;

}


BalancedReturnType *isBalancedHelper(BinaryTreeNode<int> *root) {

if (root == NULL) {

BalancedReturnType *ans = new BalancedReturnType();
ans -> height = 0;
ans -> balanced = true;
return ans;

}

BalancedReturnType *ans1 = isBalancedHelper(root -> left);
BalancedReturnType *ans2 = isBalancedHelper(root -> right);

bool flag;

if (!(ans -> balanced) || !(ans -> balanced) || ((ans1 -> height - ans2 -> height) > 1)) {

flag = true;

}

else {

flag = false;

}

BalancedReturnType *output = new BalancedReturnType();
output -> height = max(ans1 -> height, ans2 -> height) + 1;
output -> balanced = flag;

return output;

}


bool isBalanced(BinaryTreeNode<int> *root) {

if (root == NULL) {

return true;

}

return isBalancedHelper(root)->balanced;


}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBalanced(root) ? "true" : "false");
}