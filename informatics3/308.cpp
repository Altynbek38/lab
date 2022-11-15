#include <bits/stdc++.h>
using namespace std;
bool XOR(bool x, bool y){
    if(y == x){
        return 0;
    }
    else if(y != x){
        return 1;
    }
}
int main(){
    bool x, y;
    cin >> x >> y;
    cout << XOR(x, y);
    return 0;
}