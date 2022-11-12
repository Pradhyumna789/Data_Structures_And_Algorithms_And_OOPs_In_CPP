#include <algorithm>
#include <vector>


void convertToArray(BinaryTreeNode<int>, vector<int> &output) {

if (root == NULL) {

return;

}

output.push_back(root -> data);
convertToArray(root -> left, output);
convertToArray(root -> right, output);


}

void pairSum(BinaryTreeNode<int> *root, int sum) {

vector<int> output;
convertToArray(root, output);

sort(output.begin(), output.end());

int i = 0, j = output.size() - 1;

while (i < j) {

if (output[i] + output[j] == sum) {

cout << output[i] << " " << output[j] << "\n";
i++;
j--;

}

else if (output[i] + output[j] > sum) {

j--;

}

else {

i++;

}

}

}