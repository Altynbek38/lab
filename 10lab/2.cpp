#include <bits/stdc++.h>
using namespace std;
void myPow(int n){
    long long ans;
    cout << 1 << " "; 
    for(int i = 1; i <= n; i++){
        ans = i;
        for(int j = 1; j < i; j++){
            ans *= i;
        }
        cout << ans << " ";
    }
}
int main(){
    int n;
    cin >> n;
    myPow(n);

    return 0;
}