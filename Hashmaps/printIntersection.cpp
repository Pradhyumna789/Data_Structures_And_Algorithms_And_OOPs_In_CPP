#include <unordered_map>

void printIntersection(int arr1[], int arr2[], int size1, int size2) {
    
for (int i = 0; i < size1; i++) {

++freq[arr1[i]];

}

for (int i = 0; i < size2; i++) {

if (freq.find(arr2[i]) != freq.end()) {

cout << arr2[i] << "\n";

if (freq[arr2[i]] > 1) {

--freq[arr2[i]];

}

else {

freq.erase(arr2[i]);

}

}

}

}


/*

main code

#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}

*/