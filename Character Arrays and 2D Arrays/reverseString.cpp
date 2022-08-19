#include<iostream>
#include<string.h>
using namespace std;

int length(char str[]) {

int count = 0;

for(int i = 0; str[i] != '\0'; i++) {

count++;

}

return count;

}


void reverseString(char str[]) {

int i;
int j = length(str) - 1;

for (i = 0; i < j; ) {

int temp = str[i];
str[i] = str[j];
str[j] = temp;
i++;
j--;

}


}


int main() {

char str[100];

cin.getline(str, 100);

reverseString(str);

cout << str << endl;


}