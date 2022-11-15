#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 100;
    int a[n];
    int ans;

    for(int i = 0; i < 100; i++){
        cin >> a[i];
        ans += a[i];
    }
  
    cout << ans;

    return 0;
}