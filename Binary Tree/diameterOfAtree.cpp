#include<bits/stdc++.h>

pair<int, int> heightDiameter(BinaryTreeNode<int> *root) {

if (root == NULL) {

pair<int, int> p;
p.first = 0; // first represents the height of the tree
p.second = 0; // second represents the diameter of the tree
return p;

}

pair<int, int> leftAns = heightDiameter(root -> left);
pair<int, int> rightAns = heightDiameter(root -> right);

int ld = leftAns.second;
int lh = leftAns.first;
int rd = rightAns.second
int rh = rightAns.first;

int height = 1 + max(lh, rh);
int diameter = max(lh + rh, max(ld, rd));
pair<int, int> p;
p.first = height;
p.second = diameter;
return p;

}

/*

main code to the test the above code

int main() {

BinaryTreeNode<int> *root = takeInput();
printTreeLevelWise(root);

pair<int, int> p = heightDiameter(root);
cout << "Height: " << p.first << endl;
cout << "Diameter: " << p.second << endl;
delete root;

}

*/