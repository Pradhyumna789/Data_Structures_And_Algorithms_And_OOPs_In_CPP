#include<bits/stdc++.h>
using namespace std;

/* 

we are passing total number of columns through a[][100] because the function only knows m and n which represents
i and j which are the inputted number of rows and columns. j does not represent the total number of columns so we have
to input it separately while passing our 2D Array through a function.

*/

void print2DArray(int a[][100], int m, int n) { 
    
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        
        cout << a[i][j] << " ";
        
        
    }    
        
    cout << endl;    
        
    }
    
    
}



int main() {
    
    int a[100][100];
    int m, n; // m and n represents the number of rows and columns of the 2D Array "a" respectively 
    cin >> m >> n;
    
    // Inputting our Array
    
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        
        cin >> a[i][j];
        
    }    
    
        
    }
    
    cout << endl;
    
    print2DArray(a, m, n);

    /* OR

    void printArray(int a[][5], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
	}
}

int main() {

	int a[][5] = {{1, 2}, {3, 4}}; // Here, as we did not specify the number of rows separately it will assume two rows as each "{}" represents a row
	printArray(a, 5, 5); 

    // {1, 2} and {3, 4} represents the 1st and 2nd rows of our 2D Arrays respectively

}

    */
    
}