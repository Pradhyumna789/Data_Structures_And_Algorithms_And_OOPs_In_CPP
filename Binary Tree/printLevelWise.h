#include<queue>

void printLevelWise(BinaryTreeNode<int> *root) {

if (root == NULL) {

return;

}

queue<BinaryTreeNode<int> *> pendingNodes;
pendingNodes.push(root);

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

cout << front -> data << ":";
cout << "L:";

if (frontNode -> left) {

pendingNodes.push(front -> left);
cout << front -> left -> data << ",";

}

else {
    
cout << "-1";

}

cout << "R:";

if (front -> right) {

pendingNodes.push(front -> right);
cout << front -> data -> data << "," << "\n";

}

else {

cout << "-1" << "\n";

}

}

}

}