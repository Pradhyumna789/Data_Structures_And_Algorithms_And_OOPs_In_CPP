#include <iostream>
using namespace std;
#include <queue>

int main () {

priority_queue<int> pq;

pq.push(16);
pq.push(1);
pq.push(167);
pq.push(7);
pq.push(45);
pq.push(32);

cout << "Size : " << pq.size() << endl;
cout << "Top : " << pq.top() << endl;

while (!pq.empty()) {

cout << pq.top() << endl;
pq.pop();

}

}

/*

output:

Size : 6
Top : 167
167
45
32
16
7
1

*/