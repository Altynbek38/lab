#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    int c;
    for(int i = a; i <= b; i++){
        c = sqrt(i);
        if(c * c == i){
            cout << i << " ";
        }
    }

    return 0;
}