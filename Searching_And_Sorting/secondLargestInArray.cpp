// APPROACH 1

#include<iostream>
#include<climits>
using namespace std;


int findSecondLargest(int arr[], int size) {
    
    if(size<=1)
       return INT_MIN;
  
    int max = INT_MIN, secmax = INT_MIN;
    
    for(int i = 0; i < size ;i++) {

        if(arr[i] > max){
            secmax = max;
            max = arr[i];

        }

        else if(arr[i] == max)
            continue;

        else if(arr[i] > secmax)
            secmax = arr[i];
    }
    return secmax;
}

int main() {

int size;
cin >> size;

int arr[100];
for (int i = 0; i < size; i++) {
    
  cin >> arr[i];

}


cout << findSecondLargest(arr, size) << endl;

}

// APPROACH 2

#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[], int size) {

int max = INT_MIN, secmax = INT_MIN;

for (int i = 0; i < size; i++) {
    
if (arr[i] > max) {

max = arr[i];

}

}

for (int i = 0; i < size; i++) {
    
if (arr[i] < max) {
    
secmax = arr[i];

}


}

return secmax;


}


int main() {

int size;
cin >> size;

int arr[size];

for (int i = 0; i < size; i++) {

cin >> arr[i];

}

cout << findSecondLargest(arr, size) << endl;


}











