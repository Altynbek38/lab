#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i < n; i++){
    if(n % i == 0)return false;
    }
    return true;
}
int main(){
    int n;
    int m,k,z = 0;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
     cin >> k;

    for(int i = 0; i< n; ++i){
        if(v[i] > k){
            if(isPrime(v[i])){
                z++;
            }
        }
    }
    cout << z;
    return 0;
}