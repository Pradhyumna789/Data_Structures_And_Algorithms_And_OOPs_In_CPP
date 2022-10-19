void reverseStack (stack<int> &input, stack<int> &helper) {

if (input.size() <= 1) {

return;

}

int temp = input.top();
input.pop();

reverseStack(input, helper);

while (!input.empty()) {

int top = input.top();
input.pop();
helper.push(top);

}

input.push(temp);

while (!helper.empty()) {

int top = helper.top();
helper.pop();
input.push(top);

}

}