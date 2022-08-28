#include<bits/stdc++.h>
using namespace std;

void printNumbers(int n) {

if (n == 0 || n == 1) {
    
    cout << n << " ";
    return;
    
}

printNumbers(n - 1);

cout << n << " ";
return;

}

int main() {
    
    int n;
    cin >> n;
    printNumbers(n);
    
}