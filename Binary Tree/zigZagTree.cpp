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

#include<stack>

void zigZagOrder(BinaryTreeNode<int> *root) {

stack<BinaryTreeNode<int> *> s1;
stack<BinaryTreeNode<int> *> s2;
s1.push(root);

int currentLevelRemaining = 1;
int nextLevelCount = 0;
bool flag = true;

while (!s1.empty() || !s2.empty()) {

if (flag) {

BinaryTreeNode<int> *top = s1.top();
s1.pop();
cout << top -> data << " ";
currentLevelRemaining--;

if (top -> left != NULL) {

s2.push(top -> left);
nextLevelCount++;

}

if (top -> right != NULL) {

s2.push(top -> right);
nextLevelCount++;

}

if (currentLevelRemaining == 0) {

cout << "\n";
currentLevelRemaining = nextLevelCount;
nextLevelCount = 0;
flag = false;

}

}

else {

BinaryTreeNode<int> *top = s2.top();
s2.pop();
cout << top -> data << " ";
currentLevelRemaining--;

if (top -> right != NULL) {

s1.push(top -> right);
nextLevelCount++;

}

if (top -> left != NULL) {

s1.push(top -> left);
nextLevelCount++;

}

if (currentLevelRemaining == 0) {

cout << "\n";
currentLevelRemaining = nextLevelCount;
nextLevelCount = 0;
flag = true;

}

}

}

}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}