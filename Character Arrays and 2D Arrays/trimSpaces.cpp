// Approach 1

#include<iostream>
#include<string.h>
using namespace std;

int length(char input[]) {

int count = 0;

for(int i = 0; input[i] != '\0'; i++) {
    
  count++;

}

return count;

}


void trimSpaces(char input[], char output[]) {

  int j = length(input);
    int k = 0;

for(int i = 0; i < j; i++) {
    
if(input[i] != ' ') {
    
output[k] = input[i];
k++;

}


}

output[k] = '\0';


}

int main() {


char input[100];

cin.getline(input, 100);

char output[100];

trimSpaces(input, output);

cout << output << endl;

}

/*

Approach 2 - better than Approach 1

#include<iostream>
#include<string.h>
using namespace std;


void trimSpaces(char input[]) { 

int j = 0;

for(int i = 0; input[i] != '\0'; i++) {
    
if(input[i] != ' ') {

input[j] = input[i];
    j++;


}
    

}

input[j] = '\0';

}

int main() {


char input[100];

cin.getline(input, 100);

trimSpaces(input);

cout << input << endl;

}

*/
