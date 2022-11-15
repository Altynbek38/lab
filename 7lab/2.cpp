#include <bits/stdc++.h>
using namespace std;

long long binary(long long n){
    if(n == 0){
        return 0;
    }
    else
        return n % 2 + 10 * binary(n / 2);
}

int main(){
    
    long long n;
    cin >> n;

    cout <<binary(n);
    return 0;
}