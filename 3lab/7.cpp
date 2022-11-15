#include <iostream>
using namespace std;

int main(){
    int n, mf, md, j;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] >= mx){
            mx = a[i];
            mf = i ;
        }
    }
    int mn = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] <= mn){
            mn = a[i];
            md = i ;
        }
    }
  
    for(int i = 0; i < n; i++){
        a[mf] = a[md];
        a[mf] = a[i]; 

         cout <<  a[i] << " ";
    }
   
    
    return 0;
}