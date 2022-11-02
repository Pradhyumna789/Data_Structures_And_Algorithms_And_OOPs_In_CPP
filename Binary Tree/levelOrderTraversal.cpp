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

using namespace std;
#include "solution.h"

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

#include <queue>

void printLevelWise(BinaryTreeNode<int> *root) {

  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);
  pendingNodes.push(NULL);

  while (!pendingNodes.empty()) {

    BinaryTreeNode<int> *frontNode = pendingNodes.front();
    pendingNodes.pop();

    if (frontNode == NULL) {

      cout << "\n";

      if (!pendingNodes.empty()) {

        pendingNodes.push(NULL);
      }

    }

    else {

      cout << frontNode->data << " ";

      if (frontNode->left != NULL) {

        pendingNodes.push(frontNode->left);
      }

      if (frontNode->right != NULL) {

        pendingNodes.push(frontNode->right);
      }
    }
  }
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    printLevelWise(root);
}