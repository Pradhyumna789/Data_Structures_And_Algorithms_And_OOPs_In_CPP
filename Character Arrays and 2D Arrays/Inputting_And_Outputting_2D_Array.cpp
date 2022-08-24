#include<bits/stdc++.h>
using namespace std;

int main() {

int a[100][100];
int m, n; // m and n represents the number of rows and columns of the inputted 2D Array
cin >> m >> n;

// Inputting our 2D Array

for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {

 cin >> a[i][j];

}

}

cout << endl;

// Outputting our 2D Array in a row wise manner

for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {

cout << a[i][j] << " ";

}

cout << endl;

}

cout << endl;

// Outputting our 2D Array in a column wise manner

for (int j = 0; j < n; j++) {
for (int i = 0; i < m; i++) {
    
  cout << a[i][j] << " ";

}

cout << endl;

}


}