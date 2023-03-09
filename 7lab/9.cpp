#include <bits/stdc++.h>
using namespace std;
int NotZeroSum(int n, int m){
    cin >> n;
    if(n == 0){
        return m;
    }
    else    
        return NotZeroSum(n, m + n); 
}
int main(){
    int n, m = 0;
    cout << NotZeroSum(n, m);
    return 0;
}