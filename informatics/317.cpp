#include <iostream>
using namespace std;
int main(){
    int n, k, m;
    cin >> n >> k;
    m = n - k;
    int ans = 1, ansn = 1, ansk = 1, ansm = 1;
    for(int i = 1; i <= n; i++){
        ansn = ansn * i;
    }

    for(int i = 1; i <= k; i++){
        ansk = ansk * i;
    }

    for(int i = 1; i <= m; i++){
        ansm = ansm * i;
    }

    ans = ansn / (ansk * ansm);
    cout << ans << endl;

    return 0;
}