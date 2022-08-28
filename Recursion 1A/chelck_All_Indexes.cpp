#include<iostream>

using namespace std;
 
int allIndexes(int input[], int size, int x, int output[], int count = 0, int index = 0) {
  
	
    if(size == 0) {
        return count;
    }
    
    
    if(input[0] == x){
        output[count] = index;
        count++;
        
    }
    
   
    return allIndexes(input + 1, size - 1, x, output, count, index + 1);
    
}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}