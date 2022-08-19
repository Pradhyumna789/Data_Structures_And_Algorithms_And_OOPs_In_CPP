//Approach 1 - time complexity is O(n^2)

int duplicateNumber(int arr[], int n) {


for(int i = 0; i < n; i++) {

for(int j = 0; j < n; j++) {

if(i != j && arr[i] = arr[j]) {

return arr[i];

}

}

}


}


/*


Alternative Approach 2 - time complexity is O(n)

#include<iostream>
using namespace std;


int duplicateNumber(int arr[], int n) {
    
    
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        
       ans = ans^arr[i]; 
        
        
    }

    
    for(int i = 0; i <= n - 2; i++) {
        
        ans = ans^i;
        
    }
    
    return ans;
    
    
}

*/


/*

Alternative Approach 3 - time complexity is O(n)

#include<iostream>
using namespace std;


int duplicateNumber(int arr[], int n) {


int sum = 0;

for(int i = 0; i < n; i++)  {

sum = sum + arr[i];

}

sumofnaturalnumbers = [(n - 1)(n - 2)]/2

return (sum - sumofnaturalnumbers)

}

*/
