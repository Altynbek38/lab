#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int n;
    cin >> c >> n;
    
    if(c == 'A' || c == 'C' || c == 'E' || c == 'G'){
        if(n % 2 == 0){
            cout << "WHITE";
        }
        else if(n % 2 == 1){
            cout << "BLACK";
        }
    }

    else if(c == 'B' || c == 'D' || c == 'F' || c == 'H'){
        if(n % 2 == 0){
            cout << "BLACK";
        }
        else if(n % 2 == 1){
            cout << "WHITE";
        }
    }

    return 0;
}