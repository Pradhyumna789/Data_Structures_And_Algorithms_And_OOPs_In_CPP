#include<iostream>
#include<string.h>
using namespace std;

void replaceCharacter(char arr[], char c1, char c2) { // we will replace c2 with c1

int i;
int j = strlen(arr);

for (i = 0; i < j; i++) {
    
   if(arr[i] == c1) {
    
     arr[i] = c2;

   }
   

}


}


int main() {

int size;
cin >> size;

char arr[size];

cin >> arr;

char c1, c2;
cin >> c1 >> c2;

replaceCharacter(arr, c1, c2);

cout << arr << endl;

}