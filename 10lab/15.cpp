#include <bits/stdc++.h>
using namespace std;
string Binary(int m){
    string s;
    while(m > 0){
        if(m % 2 == 0){
            s += '0';
        }
        else if(m % 2 == 1){
            s += '1';
        }
        m /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n, m;
    cin >> n;
    vector <string> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(Binary(m));
    }
    
    for(auto var : v){
        cout << var << endl;
    }

    return 0;
}