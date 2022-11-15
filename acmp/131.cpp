#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }

    int index = 0;
    int cnt = 0;
    int mx = -1;
    for(int i = 0; i < n; i++){
        if(a[i][0] > mx && a[i][1] == 1){
            mx = a[i][0];
            index = i;
            cnt++;
        }
    }
    if(cnt == 0){
        cout << -1;
    }
    else
        cout << index + 1;


    return 0;
}