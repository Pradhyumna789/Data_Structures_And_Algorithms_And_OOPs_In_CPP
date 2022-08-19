
// time complexity is O(size1 * size2)

#include<iostream>
#include<climits>
using namespace std;


void intersection(int arr1[], int arr2[], int n, int m) { 


for(int i = 0; i < n; i++) {

for(int j = 0; j < m; j++) {


if(arr1[i] == arr2[j]) {

cout << arr1[i] << " ";
arr2[j] = {INT_MIN};
break;

}


}

}



}











