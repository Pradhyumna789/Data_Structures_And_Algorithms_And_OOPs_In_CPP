#include<iostream>
using namespace std;

int main() {

int n;

cout << "Enter the size of your array" << endl;

cin >> n;

int input[100];

cout << "Enter all the elements present in your array" << endl;

for(int i = 0; i < n; i++) {

cin >> input[i];


}

int sum = 0;

for(int i = 0; i < n; i++) {

sum = sum + input[i];


}

cout << sum << endl;

}
