#include <queue>

int kthLargest(int *arr, int n, int k) {

priority_queue<int, vector<int>, greater<int> > minHeap;

for (int i = 0; i < k; i++) {

minHeap.push(arr[i]);

}

for (int i = k; i < n; i++) {

if (arr[i] > minHeap.top()) {

minHeap.pop();
minHeap.push(arr[i]);

}

}

return minHeap.top();

}

/*

main code

#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}

*/