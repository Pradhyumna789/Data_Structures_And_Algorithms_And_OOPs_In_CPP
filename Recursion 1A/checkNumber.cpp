#include<bits/stdc++.h>
using namespace std;

int checkNumber(int a[], int size, int x) {
    
    if (size == 0) {
        
        return false;
        
    }
    
    if (a[0] == x) {
        
        return true;
        
    }
    
    int recursiveCall = checkNumber(a + 1, size - 1, x);
    return recursiveCall;
    
}


int main() {
    
    int size;
    cin >> size;
    
    int a[size];
    
    for (int i = 0; i < size; i++) {
        
        cin >> a[i];
        
    }
    
    int x;
    cin >> x;
    
    cout << checkNumber(a, size, x) << endl;
    
    
    
}