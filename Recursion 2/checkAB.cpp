#include<bits/stdc++.h>
using namespace std;


bool check_ab(char input[], int startIndex = 0) {
    
    
    if (input[startIndex] == '\0') {
        
        return true;
        
    }
    
    if (input[startIndex] != 'a') {
        
        return false;
        
    }
    
  
    if (input[startIndex + 1] != '\0' && input[startIndex + 2] != '\0') {
        
        if (input[startIndex + 1] == 'b' && input[startIndex + 2] == 'b') {
            
            return check_ab(input, startIndex + 3);
            
        }
        
    }
    
    return check_ab(input, startIndex + 1);
    
    
    
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=check_ab(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}