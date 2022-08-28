#include<bits/stdc++.h>
using namespace std;


int countZeros(int n, int count = 0) {

if (n == 0) {
    
    return 1;
    
}

if (n / 10 == 0) {
    
    return count;
    
}

if (n % 10 == 0) {
    
    count++;
    
}

 return countZeros(n/10, count);


}


int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}