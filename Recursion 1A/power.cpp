#include<bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    
// base case    
    
if (n == 0) {
    
    return 1;
    
}

int hypothesis = pow(x, n - 1); 
int induction = x * hypothesis;

return induction;

}


int main () {
    
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    
    
}