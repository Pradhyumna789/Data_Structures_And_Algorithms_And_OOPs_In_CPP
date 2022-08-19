#include<iostream>

using namespace std;

int checkArrayRotation(int arr[], int size) {

for(int i = 0; i < size - 1; i++) {

if(arr[i] > arr[i + 1]) {

return i + 1;

}


}

return 0;

}


int main() {

int size;
cin >> size;

int arr[size];

for (int i = 0; i < size; i++) {

cin >> arr[i];

}


cout << checkArrayRotation(arr, size) << endl;


}