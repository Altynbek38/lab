#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, direction;
    cin >> n >> m >> direction;
    int s;
    if(direction == 1){
        for(int i = n; i <= m; i++){
            s = sqrt(i);
            if(i == s * s){
                cout << i << " ";
            }
        }
    }

    else if(direction == -1){
        for(int i = m; i >= n; i--){
            s = sqrt(i);
            if(i == s * s){
                cout << i << " ";
            }
        }
    }
    return 0;
}