#include<iostream>
using namespace std;

void sort012(int arr[], int size) {
    
    int zeropos = 0, twopos = size - 1;
    
    for(int i = 0; i <= twopos; ) {
        
        if(arr[i] == 0) {
            
            int temp = arr[i];
            arr[i] = arr[zeropos];
            arr[zeropos] = temp;
            zeropos++;
            i++;
            
        }
        
        else if(arr[i] == 2) {
            
            int temp = arr[i];
            arr[i] = arr[twopos];
            arr[twopos] = temp;
            twopos--;
            
        }
        
        else {
            
            i++;
            
        }
        
        
    }
    
    
}


void printArray(int arr[], int size) {

for (int i = 0; i < size; i++) {

cout << arr[i] << " "; 

}


}


int main() {

int size;
cin >> size;

int arr[size];

for (int i = 0; i < size; i++) {

    cin >> arr[i];

}

sort012(arr, size);
printArray(arr, size);

}

