#include<stack>

int *stockSpan(int *price, int n) {

stack<int> stk;

int *output = new int[n];

stk.push(0);

output[0] = 1;

for (int i = 1; i < n; i++) {

while (!stk.empty() && price[i] > price[stk.top()]) {

stk.pop();

}

if (stk.empty()) {

output[i] = i + 1;

}

else {

output[i] = i - stk.top();

}

stk.push(i);

}

return output;

}
