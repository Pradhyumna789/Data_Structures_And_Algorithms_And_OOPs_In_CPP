#include<iostream>
using namespace std;


void printArray(int arr[], int size) {

for (int i = 0; i < size; i++)
{

cout << arr[i] << " ";

}


}



void bubbleSort(int arr[], int size) {

for(int i = 0; i < size - 1; i++) {

for(int j = 0; j < (size - 1 - i); j++) {

if(arr[j + 1] < arr[j]) {

int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;


}

}

}


}


int main() {

int size;
cin >> size;

int arr[100];

for(int i = 0; i < size; i++) {

cin >> arr[i];

}

bubbleSort(arr, size);
printArray(arr, size);

}



