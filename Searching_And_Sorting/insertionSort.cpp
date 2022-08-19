#include<iostream>
using namespace std;



void printArray(int arr[], int size) {

for (int i = 0; i < size; i++)

{

  cout << arr[i] << " ";

}


}


void insertionSort(int arr[], int size) {

for (int i = 1; i < size; i++)
{
     
    int current = arr[i];

    int j;

    for (j = i - 1; j >= 0; j--)
    {

        if (current < arr[j])
        {
            arr[j + 1] = arr[j];
        }

        else{

          break;

        }
        
        
    }

    arr[j + 1] = current;
    
}


}








int main() {

int size;
cin >> size;


int arr[100];

for(int i = 0; i < size; i++)

{

cin >> arr[i];


}


insertionSort(arr, size);
printArray(arr, size);


}



















