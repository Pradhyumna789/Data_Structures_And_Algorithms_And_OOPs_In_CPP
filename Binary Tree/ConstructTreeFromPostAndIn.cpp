#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

BinaryTreeNode<int> *buildTreeHelper(int *postorder, int postStart, int postEnd, int
*inorder, int inStart, int inEnd) {
if (postStart > postEnd || inStart > inEnd) {
return NULL;
}
int rootVal = postorder[postEnd];
BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootVal);
// Find parent element index from inorder array
int k = 0;
for (int i = inStart; i <= inEnd; i++) {
if (rootVal == inorder[i]) {
k = i;
break;
}
}
root->left = buildTreeHelper(postorder, postStart, postStart + k - inStart - 1,
inorder, inStart, k - 1);
root->right = buildTreeHelper(postorder, postStart + k - inStart, postEnd - 1,
inorder, k + 1, inEnd);
return root;
}
BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int
inLength) {
int postStart = 0;
int postEnd = postLength - 1;
int inStart = 0;
int inEnd = inLength - 1;
return buildTreeHelper(postorder, postStart, postEnd, inorder, inStart, inEnd);
}

int main() {
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}