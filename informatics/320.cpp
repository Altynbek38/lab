#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    double d, ans, val; 

    for(int i = 1; i <= n; i++){
        d = 1 / i;
        val = pow(d, 2);
        ans += val;
    }

    cout << ans << endl;

    return 0;
}