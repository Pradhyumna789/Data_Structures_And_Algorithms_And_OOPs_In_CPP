#include<iostream>
using namespace std;
#include<stack>

int main() {

stack<int> s;

s.push(10); // added 10 to our stack
s.push(20); // added 20
s.push(30); // added 30
s.push(40); // added 40
s.push(50); // added 50
s.push(60); // added 60

cout << s.top() << endl; // accessed the current top most element 60 and returns it
cout << s.pop() << endl; // deleted the currently accessed element 60
cout << s.top() << endl; // accesses the current top most element 50 and returns it
cout << s.isEmpty() << endl; // returns 0 because our stack is not empty

}