#include <queue>
#include <vector>
// In the following code pq is a minHeap

vector<int> kLargest(int input[], int n, int k) {

priority_queue<int, vector<int>, greater<int>> pq;

for (int i = 0; i < k; i++) {

pq.push(input[i]);

}

for (int i = k; i < n; i++) {

if (input[i] > pq.top()) {

pq.push(input[i]);
pq.pop();

}

}

vector<int> output;

while (!pq.empty()) {

output.push_back(pq.top());
pq.pop();

}

return output;

}


/*

main code to test the above algorithm

#include <iostream>
#include <vector>
using namespace std;
#include "Solution.h"

int main() {
	
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
    
    int k;
    cin >> k;
    
    vector<int> output = kLargest(input, size, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
	
	return 0;
}


*/