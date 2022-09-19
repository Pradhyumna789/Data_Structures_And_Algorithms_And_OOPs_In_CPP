#include<bits/stdc++.h>
using namespace std;


void intersection(int arr1[], int arr2[], int size1, int size2) {
    
    
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);
    
    
    int i = 0;
    int j = 0;
    
    
    while (i < size1 && j < size2) {
        
        if (arr1[i] == arr2[j]) {
            
            cout << arr1[i] << " ";
            i++;
            j++;
            
        }
        
        else if (arr1[i] < arr2[j]) {
            
            i++;
            
        }
        
        
        else {
            
            j++;
            
        }
        
        
    }
    
    
    
}




int main() {
    
	int size1, size2;

		cin >> size1;
		int *arr1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		cin >> size2;
		int *arr2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		intersection(arr1, arr2, size1, size2);
		
	
	
	}

    