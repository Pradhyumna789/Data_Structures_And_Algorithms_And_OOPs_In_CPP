#include<bits/stdc++.h>
using namespace std;


void helperKeypad(int num, string output, string options[10]) {
    
    if (num == 0) {
        
        cout << output << endl;
        return;
        
    }
    
    int lastDigit = num % 10;
    int smallNumber = num / 10;


    for (int i = 0; i < options[lastDigit].length(); i++) {
    
     helperKeypad(smallNumber, options[lastDigit][i] + output, options);
    
   }
   
   
   return;
    
    
    
}



void printKeypad(int num) {
    
 string options[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
 helperKeypad(num, "", options);
 return;    
    
}



int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}