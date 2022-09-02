#include<bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    
    if (n == 0) {
        
        return; // Base Case 2 - No rod so we are just returning
        
    }
    
    
    if (n == 1) { 
        
        cout << source << " " << destination << endl; // Base Case 1 - Just one rod so moving it from source rod to destination rod
        return;
        
    }
    
    
    towerOfHanoi(n - 1, source, destination, auxiliary); // moving n - 1 rods from source rod to auxiliary using destination
    
    cout << source << " " << destination << endl; // nth step - moving the largest rod from source to destination
    
    towerOfHanoi(n - 1, auxiliary, source ,destination); // moving n - 1 rods from auxiliary to destination using source
    
    
    
}



int main() {
    int n; // n represents the total number of rods
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c'); // a -> source rod, b -> auxiliary rod, c -> destination rod
}
