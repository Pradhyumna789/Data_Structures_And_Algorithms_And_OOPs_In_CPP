// Implementing Binary Search Using While Loop

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int x) {
    
    int start = 0, end = size - 1, mid;
    
    
    while(start <= end) {
        
        mid = (start + end) / 2;
        
        if(arr[mid] == x) {
            
            return mid;
            
            
        }
        
        else if(x > arr[mid]) {
            
            start = ++mid;
            
            
        } else {
            
            end = --mid;
            
        }
        
        
    }
    
    return -1;
    
    
}

int main() {

int size;
cin >> size;

int arr[100];

for(int i = 0; i < size; i++) {

cin >> arr[i];

}

int x;
cin >> x;

cout << binarySearch(arr, size, x) << endl;

}




/*

Alternative Way Of Coding - Implementing Binary Search Using For Loop

 int binarySearch(int arr[], int size, int x) {
    
    int end = size - 1;
    
    for(int start = 0; start <= end; ) {
        
        int mid = (start + end) / 2;
        
        if(arr[mid] == x) {
            
            return mid;
            
        } else if(x > arr[mid]) {            
            
            start = ++mid;
            
        }
        
        else {
            
            end = --mid;
            
        }
        
        
    }
    
    return -1;
    
    
}    

*/