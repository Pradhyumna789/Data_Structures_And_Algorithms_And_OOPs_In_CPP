#include<bits/stdc++.h>
using namespace std;

int count(int n) {

if (n == 0 || n/10 == 0) {
    
    return 1;
    
}

int hypothesis = count(n/10);
int induction = hypothesis + 1;
return induction;

}

int main() {
    
    int n;
    cin >> n;
    cout << count(n) << endl;
    
}