#include<iostream>
using namespace std;


void printArray(int ans[], int n) {

for (int i = 0; i < n; i++)
{
    cout << ans[i] << " ";
}



}




void mergeTwoSortedArrays(int arr1[], int size1, int arr2[], int size2, int ans[]) {
    
    
    int i = 0, j = 0, k = 0;
    
    while(i < size1 && j < size2) {
        
        if(arr1[i] < arr2[j]) {
            
            ans[k] = arr1[i];
            
            k++;
            i++;
            
        } else {
            
            ans[k] = arr2[j];
            
            k++;
            j++;
            
        }
        
        
    }
    
    
    while(i < size1)  {
        
        ans[k] = arr1[i];
        
        k++;
        i++;
        
        
    }
    
    while(j < size2) {
        
        ans[k] = arr2[j];
        k++;
        j++;
        
    }
    
    
}



int main() {

int size1;
cin >> size1;

int arr1[size1];

for (int i = 0; i < size1; i++)
{
    
  cin >> arr1[i];

}


int size2;
cin >> size2;

int arr2[size2];

for (int j = 0; j < size2; j++)
{
    
  cin >> arr2[j];

}

int size3;
size3 = size1 + size2;

int ans[size3];

mergeTwoSortedArrays(arr1, size1, arr2, size2, ans);
printArray(ans, size3);


}



































