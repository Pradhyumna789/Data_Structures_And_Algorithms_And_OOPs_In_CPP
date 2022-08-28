#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    
    if (n == 0 || n == 1) {

       return n;        
        
    }
    
    int hypothesis1 = fib(n - 1);
    int hypothesis2 = fib(n - 2);
    int induction = fib(n - 1) + fib(n - 2);
    return induction;
    
}


int main() {


    cout << fib(4) << endl;
    
}