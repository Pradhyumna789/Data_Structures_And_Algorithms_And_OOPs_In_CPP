#include <iostream>
#include <queue>
#include <vector>

template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

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

void print(Node<int> *head) {
    Node<int> *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


vector<Node<int> *> constructLinkedListForEachLevel (BinaryTreeNode<int> *root) {

vector<Node<int> *> output;

if (root == NULL) {

return output;

}

queue<BinaryTreeNode<int> *> pendingNodes;
pendingNodes.push(root);

int currentLevelRemaining = 1;
int nextLevelCount = 0;


Node<int> *currentLevelHead = NULL;
Node<int> *currentLevelTail = NULL;


while (!pendingNodes.empty()) {
    
BinaryTreeNode<int> *first = pendingNodes.front();
pendingNodes.pop();

Node<int> *newNode = new Node<int>(first -> data);

if (currentLevelHead == NULL) {

currentLevelHead = newNode;
currentLevelTail = newNode;

}

else {

currentLevelTail -> next = newNode;
currentLevelTail = newNode;

}

if (first -> left != NULL) {

pendingNodes.push(first -> left);
nextLevelCount++;

}

if (first -> right != NULL) {

pendingNodes.push(first -> right);
nextLevelCount++;

}

currentLevelRemaining--;

if (currentLevelRemaining == 0) {

output.push_back(currentLevelHead);
currentLevelHead = NULL;
currentLevelTail = NULL;
currentLevelRemaining = nextLevelCount++;
nextLevelCount = 0;

}

}   

return output;

}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    vector<Node<int> *> ans = constructLinkedListForEachLevel(root);

    for (int i = 0; i < ans.size(); i++) {
        print(ans[i]);
    }
}