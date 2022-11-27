#include <unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k) {

  unordered_map<int, int> freq;

  int pairCount = 0;

  for (int i = 0; i < n; i++) {

    int complement = arr[i] + k;
    pairCount += freq[complement];

    if (k != 0) {

      complement = arr[i] - k;
      pairCount += freq[complement];
    }

    ++freq[arr[i]];
  }

  return pairCount;
}

    return count;
}



/*

main code to test the above implementation

#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}#include <unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k) {

unordered_map<int, int> freq;

int pairCount = 0;

for (int i = 0; i < n; i++) {
    
int complement = arr[i] + k;
pairCount += freq[complement];

if (k != 0) {

complement = arr[i] - k;
pairCount += freq[complement];

}

++freq[arr[i]];

}

return pairCount;

}

*/