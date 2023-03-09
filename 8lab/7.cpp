#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, m, cnt = 0;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
    int k;
    cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > k){
            if(isPrime(v[i])){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}