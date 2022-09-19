#include<bits/stdc++.h>
using namespace std;


// Approach 1


int findDuplicate(int arr[], int size) {
  
  int sum = 0;
  
  for (int i = 0; i < size; i++) {
      
      sum = sum + arr[i];
      
  }
  
  int n = size;
  
 int sumOfNaturalNos = ((n - 1)  * (n - 2)) / 2;
  
  
  return sum - sumOfNaturalNos;
      
    
}




/*

// Approach 2

int findDuplicate(int arr[], int size) {
    
    
int ans = 0;

for (int i = 0; i < size; i++) {
    
    ans = ans ^ arr[i];
    
}

int n = size;

for (int i = 0; i <= (n - 2); i++) {
    
    ans = ans ^ i;
    
}    


return ans;
    
    
}

*/


int main() {
    
    int size;
    cin >> size;
    
    int arr[size];
    
 for (int i = 0; i < size; i++) {
     
     cin >> arr[i];
     
 }
 
 int Output = findDuplicate(arr, size);
 
 cout << Output << endl;

    
}