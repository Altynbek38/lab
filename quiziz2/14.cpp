#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        while(a[i] % 10 == 0){
            a[i] /= 10;
        }
    }

    for(int i = 0; i < n / 2; i++){
        while(a[i] != 0){
            m = m * 10 + a[i] % 10;
            a[i] /= 10;
        }
        a[i] = m;
        m = 0;
    }

    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n - 1 - i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
