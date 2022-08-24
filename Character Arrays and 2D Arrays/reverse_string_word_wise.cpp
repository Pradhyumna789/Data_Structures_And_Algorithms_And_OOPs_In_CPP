#include<bits/stdc++.h>
using namespace std;

// creating the below function to reverse individual words in the string

void reverseIndividualWord(char input[], int start, int end) {

while(start < end) {

int temp = input[start];
input[start] = input[end];
input[end] = temp;
start++;
end--;

}


}


void reverseStringWordWise(char input[]) {

// reversing the whole string

int i;
int len = strlen(input);
int j = len - 1;

for(i = 0; i < j; ) {

int temp = input[i];
input[i] = input[j];
input[j] = temp;
i++;
j--;

}

// reversing the individual words in the already full reversed string

int start = 0, end;
for (i = 0; i < len; i++) {
    
    if(input[i] == ' ') {

     end = i - 1;
     reverseIndividualWord(input, start, end);
     start = i + 1;

    }

}

end = i - 1;
reverseIndividualWord(input, start, end);



}


int main() {

char input[100];
cin.getline(input, 100);

reverseStringWordWise(input);

cout << input;

}