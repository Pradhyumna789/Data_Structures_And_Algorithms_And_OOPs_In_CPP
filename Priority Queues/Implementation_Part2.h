// MAX HEAP

#include <vector>


class PriorityQueue {

vector<int> data;

public:

void insert(int element) {

data.push_back(element);

int childIndex = data.size() - 1;

while (childIndex > 0) {

int parentIndex = (childIndex - 1) / 2;

if (data[parentIndex] > data[childIndex]) {

return;

}

int temp = data[childIndex];
data[childIndex] = data[parentIndex];
data[parentIndex] = temp;
childIndex = parentIndex;

}

}

int getMax () {

if (data.size() == 0) {

return 0;

}

return data[0];

}

int removeMax() {

if (data.size() == 0) {

return 0;

}

int ans = data[0];
data[0] = data[data.size() - 1];
data.pop_back();

int parentIndex = 0;
int leftIndex = parentIndex * 2 + 1;
int rightIndex = leftIndex + 1;

while (leftIndex < data.size()) {

int maxIndex = parentIndex;

if (data[leftIndex] > data[maxIndex]) {

maxIndex = leftIndex;

}

if (rightIndex < data.size() && data[rightIndex] > data[maxIndex]) {

maxIndex = rightIndex;

}

if (maxIndex == parentIndex) {

break;

}

int temp = data[maxIndex];
data[maxIndex] = data[parentIndex];
data[parentIndex] = temp;
parentIndex = maxIndex;
leftIndex = parentIndex * 2 + 1;
rightIndex = leftIndex + 1;

}

return ans;

}

int getSize() {

return data.size();

}

bool isEmpty() {

return data.size() == 0;

}

};