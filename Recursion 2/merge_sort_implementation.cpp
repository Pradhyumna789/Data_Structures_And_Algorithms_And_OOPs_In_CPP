#include<bits/stdc++.h>
using namespace std;


void merge(int a[], int si, int ei) {
    
    
    int size = ei - si + 1;
    int *out = new int[size];
    int mid = (si + ei) / 2;
    int i = si;
    int j = mid + 1;
    int k = 0;
    
    while (i <= mid && j <= ei) {
        
        if (a[i] < a[j]) {
            
            out[k] = a[i];
            k++;
            i++;
            
        }
        
        else {
            
            out[k] = a[j];
            k++;
            j++;
            
        }
        
    }
    
    
    while (i <= mid) {
        
        out[k] = a[i];
        k++;
        i++;
        
    }
    
    
    while(j <= ei) {
        
        out[k] = a[j];
        k++;
        j++;
        
    }
    
    int m = 0;
    for (int i = si; i <= ei; i++) {
        
        a[i] = out[m];
        m++;
        
    }
    
    
    delete [] out;
    
    
}



void merge_sort(int a[], int si, int ei) {
    
    
    if (si >= ei) {
        
        return;
        
        
    }
    
    
    int mid = (si + ei) / 2;
    
    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);
    merge(a, si, ei);
    
    
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
  
  merge_sort(a, si, ei);
  
  for (int i = 0; i < size; i++) {
      
      cout << a[i] << " ";
      
  }
    
}