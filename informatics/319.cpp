#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, n;
    cin >> a >> n;
    double ans = 0, var = 0; 

    for(int i = 0; i <= n; i++){
        var = pow(a, i);
        ans = ans + var;
    }

    cout << ans << endl;
}