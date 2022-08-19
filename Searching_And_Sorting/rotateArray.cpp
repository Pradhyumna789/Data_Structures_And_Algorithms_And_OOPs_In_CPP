/* APPROACH 1:

#include<iostream>

using namespace std;

 
void rotate(int arr[], int size, int d) {
    
    
    for(int i = 1; i <= d; i++) {
    

        int current = arr[0];
        
    for(int j = 0; j < size; j++) {
        
        arr[j] = arr[j + 1];
        
        
    }
        
        arr[size - 1] = current;
        
        
    }
    
    
}


void printArray(int arr[], int size) {

for (int i = 0; i < size; i++)
{
    
  cout << arr[i] << " ";

}



}


int main () {

int size;
cin >> size;

int arr[100];

for (int i = 0; i < size; i++)
{
    
  cin >> arr[i];

}

int d;
cin >> d;


rotate(arr, size, d);
printArray(arr, size);


}


 APPROACH 2:

#include<iostream>
using namespace std;

void rotate(int arr[], int size, int d) {

int temp[size];
int k = 0;

for (int i = d; i < size; i++) {
    
temp[k] = arr[i];
k++;

}

for (int i = 0; i < d; i++) {
    
temp[k] = arr[i];
k++;

}

for (int i = 0; i < size; i++) {
    
  arr[i] = temp[i];

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

int arr[100];

for (int i = 0; i < size; i++) {
    
cin >> arr[i];

}

int d;
cin >> d;

rotate(arr, size, d);
printArray(arr, size);

}

*/




























