#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    

    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int mn = min(a, min(b, c));
        cout << a + b + c - mn - mx << endl;
    }



    return 0;
}