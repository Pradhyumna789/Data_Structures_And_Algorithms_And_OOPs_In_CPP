#include <queue>


int buyTicket(int *arr, int n, int k) {

queue<int> peopleQueue;

priority_queue<int> maxHeap;

for (int i = 0; i < n; i++) {

peopleQueue.push(arr[i]);
maxHeap.push(arr[i]);

}

int count = 0;

while (!maxHeap.empty()) {

if (peopleQueue.front() == maxHeap.top()) {

if (k == 0) {

return count + 1;

}

else {

count++;
peopleQueue.pop();
maxHeap.pop();
k--;

}

}

else {

peopleQueue.push(peopleQueue.front());
peopleQueue.pop();

if (k == 0) {

k = peopleQueue.size() - 1;

}

else {

k--;

}

}

}

return count;

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

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}

*/
