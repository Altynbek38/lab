#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;

    for(int i = -60; i <= 60; i++){
        if(a * pow(2, i) == b){
            cout << "YES " << i;
            return 0; 
        }
    }

    cout << "NO";

    return 0;
}
