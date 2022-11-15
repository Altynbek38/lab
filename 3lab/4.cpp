#include <iostream>
using namespace std;

int main(){
    int n, mf, mx;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
 
    }

    mx = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] >= mx){
            mx = a[i];
            mf = i + 1;
        }
                                                              
    }         
    cout << mf;      
}