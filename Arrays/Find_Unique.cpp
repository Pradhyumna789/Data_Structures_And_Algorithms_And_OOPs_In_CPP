// Time complexity of the below approach is O(n^2)

#include<iostream>
#include<climits>
using namespace std;


int findUnique(int arr[], int size) {
    
    int j;
    
    for(int i = 0; i < size; i++) {
        
        j = 0;
        
        for(; j < size; j++) {
            
            if((i != j) && (arr[i] == arr[j])) {
                
                break;
                
            }
            
            
        }
        
        if(j == size) {
            
            return arr[i];
            
        }
        
    }
    
    
}



/* 

Alternative Approach - Time complexity of this approach is O(n)

#include<iostream>
using namespace std;

int findUnique(int arr[], int n) {

int ans = 0;
for(int i = 0; i < n; i++) {

ans = ans^arr[i];

}

}


*/