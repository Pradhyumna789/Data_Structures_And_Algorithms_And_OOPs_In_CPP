#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char str[]) { // A string is a 1D character array

int i;
int j = strlen(str) - 1; // strlen(); calculates the length of the string

for(i = 0; i < j; ) {
    
if (str[i] != str[j]) {

    return false;

}

i++;
j--;

}

return true;

}


int main() {

int size;
cin >> size;

char str[size];

cin >> str;

if(checkPalindrome(str) == true) {

cout << "true";

}

else {

cout << "false";

}


// shortcut for the above syntax -> cout << checkPalindrome(str) ? "true" : "false";




}



