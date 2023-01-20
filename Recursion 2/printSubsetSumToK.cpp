#include <iostream>
using namespace std;

void subsetSumToKHelper(int input[], int startIndex, int size, int output[], int oSize, int k) {

    if(startIndex == size) {

        if(k == 0) {

            for (int i = 0; i < oSize; i++) {
                
                cout << output[i] << " ";

            }

            cout << endl;
            

        }
        
        return;

    }

    int smallOutput1[1000], smallOutput2[1000], smallSize1 = 0, smallSize2 = 0;
    subsetSumToKHelper(input, startIndex + 1, size, output, oSize, k);

    if(k > 0) {

        int i;
        for (i = 0; i < oSize; i++) {
            
            smallOutput2[i] = output[i];

        }

        smallOutput2[i] = input[startIndex];
        subsetSumToKHelper(input, startIndex + 1, size, smallOutput2, oSize + 1, k - input[startIndex]);
        

    }

}

void printSubsetSumToK(int input[], int size, int k) {

    int output[1000];
    subsetSumToKHelper(input, 0, size, output, 0, k);

}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
