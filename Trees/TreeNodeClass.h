// Code in the header(.h) file

#include <vector>
using namespace std;

template <typename T>
class TreeNode {

public:

T data;
vector<TreeNode<T>*> children;

TreeNode(T data) {

this -> data = data;

}


}

// Code in the .cpp(created seperately) file

#include <iostream>
#include "TreeNodeClass.h"
using namespace std;

int main() {

TreeNode<int>* root = new TreeNode<int>(1);
TreeNode<int>* node1 = new TreeNode<int>(2);
TreeNode<int>* node2 = new TreeNode<int>(3);

root -> children.push_back(node1); // connects node1 to the root node
root -> children.push_back(node2); // connects node2 to the root node


}
