#include<bits/stdc++.h>
using namespace std;


int length(char s[]) {

if (s[0] == '\0') {

return 0;

}

int recursiveCall = length(s + 1);
return 1 + recursiveCall;

}


int main() {

char str[100];
cin >> str;

int l = length(str);
cout << l << endl;

}
