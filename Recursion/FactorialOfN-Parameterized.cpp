#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
void f(int i, int fct){
      if(i<1){
        cout<<fct; 
        return; 
      }
       f(i-1,fct*i); 
}
int main() {
    int n; 
    cin>>n; 
    f(n,1); 
    return 0;

}
