#include<bits/stdc++.h>
using namespace std;


int partition(int a[], int si, int ei) {
    
    
    int pivot = a[si];
    int countOfSmallerElements = 0;
    
    for (int i = si; i <= ei; i++) {
        
        if (a[i] < pivot) {
            
        countOfSmallerElements++;
            
        }
        
    }
    
    
    int pivotIndex = si + countOfSmallerElements;
    a[si] = a[pivotIndex];
    a[pivotIndex] = pivot;
    
    int i = si;
    int j = ei;
    
    while (i < pivotIndex && j > pivotIndex) {
        
        if (a[i] < pivot) {
            
            i++;
            
        }
        
        else if (a[j] > pivot) {
            
            j--;
            
        }
        
        else {
            
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
            
        }
        
        
    }
    
    
    return pivotIndex;


    
}



void quick_sort(int a[], int si, int ei) {
    
    
    if (si >= ei) {
        
        return;
        
    }
    
    
    int p = partition(a, si, ei); 
    quick_sort(a, si, p - 1);
    quick_sort(a, p + 1, ei);
    
    
}



int main() {
    
    int size;
    cin >> size;
    
    int a[size];
    
    
    for (int i = 0; i < size; i++) {
        
        cin >> a[i];
        
    }
    
    int si = 0;
    int ei = size - 1;
    
    quick_sort(a, si, ei);
    
    for (int i = 0; i < size; i++) {
        
        cout << a[i] << " "; 
        
    }
    
}