#include<iostream>
using namespace std;


void printArray(int b[], int n) {

for(int i = 0; i < n; i++){

	cout << b[i] << endl;

}

cout << endl;

}


void reverse(int b[], int n) {

int i = 0;
int j = n - 1;
int temp;


while(i < j) {

temp = b[i];
b[i] = b[j];
b[j] = temp;

i++;
j--;

}

}


int main() {

int b[100] = {1, 2, 3, 4, 5};

reverse(b, 5);

printArray(b, 5);

}
