#include<bits/stdc++.h>
using namespace std;


int sumOfArray(int a[], int size) {

if (size == 0) {

return a[0];

}

if (size == 1) {

 return a[0];

}

int recursiveCall = sumOfArray(a + 1, size - 1);
int inductionStep = a[0] + recursiveCall;
return inductionStep;

}


int main() {

int a[6] = {1, 2, 3, 4, 5, 6};

cout << sumOfArray(a, 6) << endl;
}