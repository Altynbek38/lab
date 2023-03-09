#include <bits/stdc++.h>
using namespace std;
string DexToHex(int n){
    string hex = "";
    string num = "0123456789ABCDEF";
    int k = 0;
    for(int i = 0; n > 0; i++){
        k = n % 16;
        hex += num[k];
        n /= 16;
    }
    reverse(hex.begin(), hex.end());
    return hex;
}
int main(){
    int n;
    cin >> n;
    cout << DexToHex(n);
}