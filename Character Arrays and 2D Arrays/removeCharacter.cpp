  
#include<bits/stdc++.h>
using namespace std;


void removeAllOccurrencesOfChar(char a[], char x) {


int i;
int j = 0;
int len = strlen(a);

for (i = 0; i < len; i++) {
    
    if (a[i] == x) {
        
        a[i] = '\0';
        
    }
    
    else {
     
     int temp = a[j];
     a[j] = a[i];
     a[i] = temp;
     j++;
        
    }
    
}

}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}