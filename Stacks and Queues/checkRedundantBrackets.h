#include<stack>


bool checkRedundantBrackets(string expression) {

stack<char> stk;
string operators = "+-*/";

for (int i = 0; i < expression.length(); i++) {

if (expression[i] == '(' || operators.find(expression[i]) != string::npos) {

stk.push(expression[i]);

}

else if (expression[i] == ')') {

bool hasOperator = false;

while (!stk.empty() && stk.top() != '(') {

stk.pop();
hasOperator = true;

}

if (!hasOperator) {

return true;

}

if (!stk.empty()) {

stk.pop();

}

}

}

return false;


}
