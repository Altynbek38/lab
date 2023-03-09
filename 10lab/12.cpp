#include <bits/stdc++.h>
using namespace std;
void progress(int n){
    for(int i = 1; i <= n;i++){
        for(int j = 0; j < i; j++){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    progress(n);

    return 0;
}