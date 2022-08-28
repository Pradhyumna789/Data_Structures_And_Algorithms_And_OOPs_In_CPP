#include<bits/stdc++.h>
using namespace std;


bool isSorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = isSorted(a + 1, size - 1);
	return isSmallerSorted;

}

int main() {

int size;
cin >> size;

int a[size];

for (int i = 0; i < size; i++) {
    
      cin >> a[i];

}

cout << isSorted(a, size);

}