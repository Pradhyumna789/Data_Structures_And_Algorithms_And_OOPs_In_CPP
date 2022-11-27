#include <queue>

vector<int> kSmallest(int arr[], int n, int k) {

priority_queue<int> maxHeap;

for (int i = 0; i < k; i++) {

maxHeap.push(arr[i]);

}

for (int i = k; i < n; i++) {

if (arr[i] < maxHeap.top()) {

maxHeap.pop();
maxHeap.push(arr[i]);

}

}

vector<int> output;

while (!maxHeap.empty()) {

output.push_back(maxHeap.top());
maxHeap.pop();

}

return output;

}

/*

main code for testing the above algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}

*/