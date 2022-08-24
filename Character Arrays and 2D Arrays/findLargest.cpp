#include<bits/stdc++.h>
using namespace std;

void findLargest(int input[][100], int m, int n) {
    
    bool isRow = true;
    
    int maxSum = INT_MIN, index;
    
    for (int i = 0; i < m; i++) {
    
    int rowSum = 0;
    
    for (int j = 0; j < n; j++) {
        
        rowSum = rowSum + input[i][j];
        
    }
    
    if(rowSum > maxSum) {
        
        maxSum = rowSum;
        index = i;
        
    }
        
}
    
    
    for (int j = 0; j < n; j++) {
        
     int colSum = 0;    
        
    for (int i = 0; i < m; i++) {
        
        colSum = colSum + input[i][j];
        
    }
    
    if (colSum > maxSum) {
        
        maxSum = colSum;
        isRow = false;
        index = j;
        
    }
        
        
    }
    
    
    if (isRow == true) {
        
        cout << "Row" << " ";
        
    }
    
    else {
        
        cout << "Column" << " ";
    }
    
    cout << index << " " << maxSum << endl;
    
    
}



int main() {
    
    int input[100][100];
    int m, n;
    
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        
        cin >> input[i][j];
        
    }   
    
}

  findLargest(input, m , n);
    
}
