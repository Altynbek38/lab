#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int val, ans = 0;

    for(int i = 0; i <= n; i++){
        val = pow(2, i);
        ans += val;   
    }

    cout << ans;

    return 0;
}