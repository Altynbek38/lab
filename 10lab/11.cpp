#include <bits/stdc++.h>
using namespace std;
bool isPrime(int m){
    m = abs(m);
    if(m == 0 || m == 1){
        return true;
    }
    for(int i = 2; i < m; i++){
        if(m % i == 0){
            return true;
        }
    }
    return false;
}
int main(){
    int n, m;
    cin >> n;
    //vector <int> v;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> m;
        //v.push_back(m);
        if(!isPrime(m)){
            ans++;
        }
    }
    cout << ans;
    return 0;
}