#include<bits/stdc++.h>
using namespace std;


int multiplyNumbers(int m, int n) {
    
    if (m == 0 || n == 0) {
        
        return 0;
        
    }
    
    int recursiveCall = multiplyNumbers(m, n - 1);
    
    int calculation = m + recursiveCall;
    
    return calculation;
    
}



int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
