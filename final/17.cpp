#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx = 1;
    for(int i = 0; i < n; i++){
        if(a[i] >= mx){
            mx = a[i];
            cnt = 0;
        }
        cnt++;
    }

    cout << cnt;
    
    return 0;
}