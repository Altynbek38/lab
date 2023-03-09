#include <bits/stdc++.h>
using namespace std;
int degree(int n, int d){
    if(d == n || n == 1){
        return 0;
    }
    else if(d > n){
        return -1;
    }
    else{
        return degree(n, d * 2);
    }
}
int main(){
    int n;
    cin >> n;
    int d = 2;
    int ans = degree(n, d);
    if(ans == 0){
        cout << "Yes";
        return 0;
    }
    cout << "No";
    

    return 0;
}