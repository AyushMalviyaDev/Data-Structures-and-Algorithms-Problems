#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
void f(int l, int h, int arr[]){
    if(l>h){
        return; 
    }
    swap(arr[l],arr[h]); 
    f(l+1,h-1,arr); 
      
}
int main() {
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++)
        cin>>arr[i]; 
    f(0,n-1,arr); 
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; 
return 0; 
}
