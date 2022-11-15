#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n = 2){
        return 1;
    }
    if(n <= 1){
        return 0;
    }
    else{
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}
int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}