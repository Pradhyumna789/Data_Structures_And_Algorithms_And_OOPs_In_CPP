#include<bits/stdc++.h>
using namespace std;

string getCompressedString(string &input) {

if (input.length() == 0) {

return " ";

}

int start = 0;
int end = 0;

string compressedString = " ";

while (start < input.length()) {

while ((end < input.length()) && (input[end] == input[start])) {

end += 1;

}

int totalCharCount = end - start;

if (totalCharCount != 1) {

compressedString += input[start];
compressedString += (char)(totalCharCount + '0');

}

else {

compressedString += input[start];

}

start = end;

}

return compressedString;

}