#include<iostream>
using namespace std;


int arrange(int arr[], int n) {

int i = 0;
int j = n - 1;
int number = 1;


while(i <= j) {

if(number % 2 != 0) {

arr[i] = number;
i++;
number++;

}

else{

arr[j] = number;
j--;
number++;

}

}


}




