#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    print(n - 2);
     cout << n << " ";
}

int main() {
    int num = 5;
    print(num);
}