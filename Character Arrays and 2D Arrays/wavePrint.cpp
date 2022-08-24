#include<bits/stdc++.h>
using namespace std;


void sineWavePrint(int arr[][100], int m, int n) {
    
 for (int j = 0; j < n; j++) {
     
     if (j % 2 == 0) {
         
    for (int i = 0; i < m; i++) {
        
        cout << arr[i][j] << " ";
        
    }
        
    }
    
    else {
        
        for (int i = m - 1; i >= 0; i--) {
            
            cout << arr[i][j] << " ";
            
        }
        
    }
         
    
     
 }
    
    
}



int main() {
    
int arr[100][100];    
int m, n;
cin >> m >> n;

for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
    
    cin >> arr[i][j];
    
}    
    
    
}

 sineWavePrint(arr, m, n);
    
}
