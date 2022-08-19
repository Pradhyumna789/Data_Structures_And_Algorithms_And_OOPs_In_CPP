#include<iostream>


void swapAlternate(int arr[], int size) {

	for(int i = 0; i < size - 1; i+=2) {

          int temp = arr[i];  
          arr[i] = arr[i + 1];
	  arr[i + 1] = temp;

	}

	cout << endl;

}



/*
Alternative way 1

#include<iostream>
using namespace std;


void swapAlternate(int arr[], int n) {

int i = 0;
int j = i + 1;

while(j < n) {

	int temp = arr[i];
	arr[i] = arr[j]
	arr[j] = temp;
        i = i + 2;
	j = i + 1;
}

cout << endl;

} */



/*

Alternative way 2


#include<iostream>
using namespace std;


void swapAlternate(int arr[], int n) {

	int i = 0;
	
	while(i < n - 1) {

            int temp = arr[i];
            arr[i] = arr[i + 1];
	    arr[i + 1] = temp;
	    i += 2;
	    

	}

}


*/
