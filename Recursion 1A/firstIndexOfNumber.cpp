#include<bits/stdc++.h>
using namespace std;


int checkFirstIndex(int a[], int size, int x, int count = 0) {
    
    
    if (size == 0) {
        
        return -1;
        
    }
    
    if (a[0] == x) {
        
        return count;
        
    }
    
    int recursiveCall = checkFirstIndex(a + 1, size - 1, x, count + 1);
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
    
    cout << checkFirstIndex(a, size, x) << endl;
    
    
}