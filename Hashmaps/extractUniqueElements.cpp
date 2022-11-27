#include <unordered_set>

string uniqueChar(string str) {

string answer;
unordered_set<char> charSet;

for (char ch : str) {

if (charSet.find(ch) == charSet.end()) {

answer.push_back(ch);
charSet.insert(ch);

}

}

return answer;

}

/*

main code to test the above implementation

#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}

*/
