#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if((int)c >= 97 && (int)c <= 122){
        char ans = (int)c - 32;
        cout << ans;
    }
    else if((int)c >= 65 && (int)c <= 90){
        char ans = (int)c + 32;
        cout << ans;
    }
    else{
        cout << c;
    }
    
    return 0;
}