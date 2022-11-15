#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int a[n];
    for(int i = 0; i <= n; i++){
        a[0] = 1;
        a[1] = 1;
        a[2] = 2;
        a[i] = a[i - 2] + a[i - 1];
    }

    return a[n];
}
int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}