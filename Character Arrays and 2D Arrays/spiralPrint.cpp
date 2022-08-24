#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int nElements = nRows * nCols;
    int colStart, colEnd, rowStart, rowEnd, i, j;
    colStart = 0;
    colEnd = nCols - 1;
    rowStart = 0;
    rowEnd = nRows - 1;
    int count = 0;
    
    
    while(count <= nElements){
      
        for(j = colStart;j <= colEnd ; j++){
            cout << input[rowStart][j] << " ";
            count++;
        }
       
        rowStart++;
        for(i = rowStart;i <= rowEnd ; i++){
            cout << input[i][colEnd] << " ";
            count++;
        }
       
        colEnd--;
        
        for(j = colEnd;j >= colStart; j--){
            cout << input[rowEnd][j] << " ";
            count++;
        }
       
        rowEnd--;
        for(i = rowEnd;i >= rowStart; i--){
            cout << input[i][colStart] << " ";
            count++;
        }
     
        colStart++;
    }
}

