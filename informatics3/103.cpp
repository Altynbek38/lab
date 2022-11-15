#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    if((int)c <= 122 && (int)c >= 97){
        char ans = (int)c - 32;
        cout << ans;
    }
    else
        cout << c;
    

    return 0;
}