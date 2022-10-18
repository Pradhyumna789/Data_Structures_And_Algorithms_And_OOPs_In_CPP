
#include <stack>
bool isBalanced(string str) {
    
    stack<char> s;
    
	for (int i = 0; i < str.length();i++) {
        if (str[i] == '(' or str[i] == '{' or str[i] == '[') {
            s.push(str[i]);
        }
     
     else if (str[i] == ')' or str[i] == '}' or str[i] == ']') {
         
         if (s.empty()) {
             
             return false;
             
         }
         
         char c;
         c = s.top();
         s.pop();
         
         if (str[i] == ')' && c == '(') {
             
             continue;
             
         }
         
        else if (str[i] == '}' && c == '{}') {
             
             continue;
             
         }
         
         else if (str[i] == ')' && c == '(') {
             
             continue;
             
         }
                               
         else {
             
             return false;
             
         }                        
         
     }                           
}                                                                
                                
                                         
return s.empty();
                                         
}


/*

main code


#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}


*/