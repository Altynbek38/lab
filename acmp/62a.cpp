#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int n;

    cin >> c >> n;

    if(((int)c + n) % 2 == 1){
        cout << "WHITE";
    }
    else{
        cout << "BLACK";
    }
    return 0;
}