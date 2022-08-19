#include<iostream>
using namespace std;


void printArray(int input[], int n) {

cout << "print : " << endl;

for(int i = 0; i < n; i++) {

cout << input[i] << endl;

}

cout << endl;

}

int main() {


int n;

cout << "Enter the size of your array" << endl;

cin >> n;


int input[100];


cout << "Enter the elements present in your array" << endl;

for(int i = 0; i < n; i++) {

cin >> input[i];

}

printArray(input, n);

}


