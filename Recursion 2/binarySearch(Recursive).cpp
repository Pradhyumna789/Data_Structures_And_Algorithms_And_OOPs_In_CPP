#include<bits/stdc++.h>
using namespace std;


int binarySearchHelper(int arr[], int start, int end, int x) {
    
    
    if (start > end) {
        
        return -1;
        
    }
    
    
    int mid = (start + end) / 2; 
    
    
    if (arr[mid] == x) {
        
        return mid;
        
    }
    
    
   else if (x > arr[mid]) {
        
        return binarySearchHelper(arr, mid + 1, end, x);
        
    }
    
    
    else return binarySearchHelper(arr, start, mid - 1, x);
    
}
    
int binarySearch(int arr[], int size, int x) {
    
    return binarySearchHelper(arr, 0, size - 1, x);
    
}


int main() {
  
  int size;
  cin >> size;
  
  int arr[size];
  
  for (int i = 0; i < size; i++) {
      
      cin >> arr[i];
      
  }
  
  int x;
  cin >> x;
  
  cout << binarySearch(arr, size, x);
  
}