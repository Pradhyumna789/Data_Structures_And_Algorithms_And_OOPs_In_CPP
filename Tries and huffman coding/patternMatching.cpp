#include <iostream>
using namespace std;
#include "TrieImplementation.h"

bool patternMatching(vector<string> vect, string pattern) {

for (int i = 0; i < vect.size(); i++) {

string word = vect[i];

for (int j = 0; j < word.length(); j++) {
    
insertWord(word.substr(j));

}

}

return search(pattern);

}

/*

main code to test the above implementation

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
    Trie t;
    int n;
    cin >> n;
    string pattern;
    vector<string> vect;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        vect.push_back(word);
    }
    cin >> pattern;

    cout << (t.patternMatching(vect, pattern) ? "true" : "false");
}

*/
