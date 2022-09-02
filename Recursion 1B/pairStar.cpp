#include <iostream>
using namespace std;
 
// Function to insert * at desired position
void pairStar(string& input, string& output,
              int i = 0)
{
    // Append current character
    output = output + input[i];
 
    // If we reached last character
    if (i == input.length() - 1)
        return;
 
    // If next character is same,
    // append '*'
    if (input[i] == input[i + 1]) {
        output = output + '*';      
 
    }

    pairStar(input, output, i+1);
}
 
// Driver code
int main()
{
    string input = "geeks", output = "";
    pairStar(input, output);
    cout << output << endl;
    return 0;
}