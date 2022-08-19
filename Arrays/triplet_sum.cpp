#include<iostream>
using namespace std;


int tripletSum(int arr[], int size, int x) {
    
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        
        for(int j = i + 1; j < size; j++){
            
            for(int k = j + 1; k < size; k++) {
                
                
                if(arr[i] + arr[j] + arr[k] == x) {
                    
                    count++;
                    
                }
                
                
            }
            
            
        }
        
    }
    
    
    return count;
    
}
