#include<stack>

int countBracketReversals(string input) {

int len = input.length();

if (len == 0) {

return 0;

}

if (len % 2 != 0) {

return -1;

}

stack<char> stk;

for (int i = 0; i < len; i++) {

char currentChar = input[i];

if (currentChar == '{') {

stk.push(currentChar);

}

else {

if (!stk.empty() && stk.top() == '{') {

stk.pop();

}

else {

stk.push(currentChar);

}

}

}

int count = 0;


while (!stk.empty()) {

char char1 = stk.top();
stk.pop();
char char2 = stk.top();
stk.pop();

if (char1 != char2) {

count = count + 2;

}

else {

count = count + 1;

}


}

return count;

}