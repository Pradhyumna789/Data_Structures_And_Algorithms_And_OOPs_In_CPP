#include<bits/stdc++.h>
using namespace std;

int main() {

int a[100][100];
int row, col;
cin >> row >> col;

for (int i = 0; i < row; i++) {
for (int j = 0; j < col; j++) {
    
cin >> a[i][j];

}

}


for (int j = 0; j < col; j++) {
    
int col_sum = 0;
    
for (int i = 0; i < row; i++) {
    
col_sum = col_sum + a[i][j];

}

cout << col_sum << " ";

}


}