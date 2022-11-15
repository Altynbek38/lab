#include <bits/stdc++.h>

int main(){
    int n, m, c;
    std :: cin >> n >> m;
    int mx;
    if(n > m){
        c = m;
    }
    else{
        c = n;
    }
    for(int i = 1; i <= c; i++){
        if(n % i == 0 && m % i == 0){
           mx = i;
        }
    }
    std :: cout << mx;
    return 0;
}