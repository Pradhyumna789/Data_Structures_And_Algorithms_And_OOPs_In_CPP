template <typename T>
T *data;
int nextIndex;
int firstIndex;
int size;
int capacity;

public:

QueueUsingArray(int s) {

data = new T[s];
nextIndex = 0;
firstIndex = 0;
size = 0;

}

int getSize() {

return size;

}

bool isEmpty() {

return size == 0;

}


void enqueue(T element) {

if (size == capacity) {

T *newData = new T[2 * capacity];
int j = 0;
for (int i = 0; i < capacity; i++) {

newData[j] = data[i];
j++;

}

for (int i = 0; i < firstIndex; i++) {

newData[j] = data[i];
j++;

}

delete [] data;
data = newData;
firstIndex = 0;
nextIndex = capacity;
capacity = 2 * capacity;

}

data[nextIndex] = element; // after initilializing a value into out queue's current nextIndex = 0
// after the above step the nextIndex should become zero(0) again
nextIndex = (nextIndex + 1) % capacity;
if (firstIndex == -1) {

firstIndex = 0;

}

size++;

}

T front() {

if (isEmpty()) {

cout << "Queue is empty" << endl;
return 0; 

}

return data[firstIndex];

}

T dequeue() {

if (isEmpty()) {
    
cout << "Queue is empty" << endl;
return 0;

}

T ans = data[firstIndex];
firstIndex = (firstIndex + 1) % capacity;
size--;
if (size == 0) {

firstIndex = -1;
nextIndex = 0;

}
return ans;

}



