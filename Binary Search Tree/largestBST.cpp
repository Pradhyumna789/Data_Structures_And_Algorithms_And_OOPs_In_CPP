#include<climits>


class bstSubtreeReturn {

public:

int max;
int min;
int height;
bool isBST;


};


bstSubtreeReturn largestBSTSubtreeHelper(BinaryTreeNode<int> *root) {

if (root == NULL) {

bstSubtreeReturn ans;
ans.max = INT_MIN;
ans.min = INT_MAX;
ans.isBST = true;
ans.height = 0;
return ans;

}

bstSubtreeReturn left = largestBSTSubtreeHelper(root -> left);
bstSubtreeReturn right = largestBSTSubtreeHelper(root -> right);

if (!(right.isBST && right.min > root -> data)) {

right.isBST = false;

}

if (!(left.isBST && left.max < root -> data)) {

left.isBST = false;

}

bstSubtreeReturn ans;

if (!left.isBST || !right.isBST || root -> data < left.max || root -> data > right.min) {

if (left.height > right.height) {

left.isBST = false;
return left;

}

else {

right.isBST = false;
return right;

}

}

ans.isBST = true;
ans.min = min(left.min, min(right.min, root -> data));
ans.max = max(left.max, max(right.max, root -> data));
ans.height = max(left.height, right.height) + 1;

return ans;

}



int largestBSTSubtree(BinaryTreeNode<int> *root) {

return largestBSTSubtreeHelper(root).height;


}


















