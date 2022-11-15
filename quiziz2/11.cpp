#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    cin >> t;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(t >= a[i] && t <= b[i]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}