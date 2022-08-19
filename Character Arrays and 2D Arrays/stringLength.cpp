#include<iostream>
using namespace std;

int length(char arr[]) {

int count = 0;

for(int i = 0; arr[i] != 0; i++) {

count++;

}

return count;

}


int main() {

char arr[100000];

cin >> arr;

cout << length(arr) << endl;

}




