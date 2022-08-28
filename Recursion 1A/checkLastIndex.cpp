#include<bits/stdc++.h>
using namespace std;


int checkLastIndex (int a[], int size, int x) {
    
    
    if (size == 0) {
        
        return -1;
        
    }
    
    if (a[size - 1] == x) {
        
        return size - 1;
        
    }
    
    int recursiveCall = checkLastIndex(a + 1, size - 1, x);
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
    
    cout << checkLastIndex(a, size, x) << endl;
    
}