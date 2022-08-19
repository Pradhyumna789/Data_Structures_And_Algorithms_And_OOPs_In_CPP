#include<iostream>
using namespace std;


void selectionSort(int input[], int n) { // n -> size of the array input[]


for (int i = 0; i < n - 1; i++)
{

int min = input[i];
int minIndex = i;

    for (int j = i + 1; j < n; j++)
    {
        
     if(input[j] < min) {

     min = input[j];
     minIndex = j;

     }


    }


    int temp = input[i];
    input[i] = input[minIndex];
    input[minIndex] = temp;
    
}




}



int main() {

int input[6] = {8, 5, 1, 4, 6, 2};

 selectionSort(input, 6);

for(int i = 0; i < 6; i++) {

cout << input[i] << " ";


}

}


