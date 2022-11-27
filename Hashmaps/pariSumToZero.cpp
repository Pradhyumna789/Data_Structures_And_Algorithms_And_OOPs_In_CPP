#include <unordered_map>

int pairSum(int *arr, int n) {

unordered_map<int, int> freq;
int pairCount = 0;

for (int i = 0; i < n; i++) {

int complement = -arr[i];

if (freq.find(complement) != freq.end()) {

pairCount += freq[complement];

}

++freq[arr[i]];

}

return pairCount;

}

/*

main code to test the above implementation

#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}

*/