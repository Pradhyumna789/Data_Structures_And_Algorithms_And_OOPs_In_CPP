#include<bits/stdc++.h>
using namespace std;


char highestOccurringChar(char a[]) {
    
 char result;    
 int len = strlen(a);    
 int frequency[256] = {0};    
 int max = INT_MIN;    
    
 for (int i = 0; i < len; i++) {
     
     frequency[a[i]]++;
     
 }
 
 for (int i = 0; i < len; i++) {
     
     if (frequency[a[i]] > max) {
         
         max = frequency[a[i]];
         result = a[i];
         
     }
     
     
 }
 
 return result;
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}