#include <bits/stdc++.h>
using namespace std;
int min(int a[]){
    int mn = a[0];
    for(int i = 0;  i < 4; i++){
        if(a[i] < mn){
            mn = a[i];
        }
    }
    return mn;
}
int main(){
    int a[4];

    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }

    cout << min(a);
    return 0;
}