#include <bits/stdc++.h>
using namespace std;
string hex(int n, int m, string h, string s){
    if(n == 0){
        return s;
    }
    else{
        s = h[n % m] + s;
        return hex(n / m, m, h, s);
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    string h = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s = "";
    cout << hex(n, m, h, s);
    return 0;
}