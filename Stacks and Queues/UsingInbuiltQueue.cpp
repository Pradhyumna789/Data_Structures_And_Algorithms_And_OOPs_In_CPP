#include<queue>

int main () {

queue<int> q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);

cout << q.front() << endl; // accesses and prints 10
q.pop(); // deletes 10

cout << q.front() << endl; // accesses and prints 20 
cout << q.size() << endl; // returns current size which is 5 
cout << q.empty() << endl; // returns 0(false) representing that the queue is not empty
 
// Now below is some code to access and delete all elements in the queue

while(!q.empty()) {

cout << q.front() << endl;
q.pop();

}

}