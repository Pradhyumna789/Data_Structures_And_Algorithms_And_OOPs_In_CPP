#include<iostream>
using namespace std;

void sortZeroesAndOne(int input[], int size) {
    
int zeroPos = 0;
    
    for(int i = 0; i < size; i++) {
        
        if(input[i] == 0) {
             
            int temp = input[zeroPos];
            input[zeroPos] = input[i];
            input[i] = temp;
            zeroPos++;
            
        }
        
    }
    
    
}