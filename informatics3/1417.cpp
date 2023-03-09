#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, m;
    cin >> s >> n >> m; 
    
    for(int i = 0; i < n - 1; i++){
        cout << s[i];
    }

    for(int i = m - 1; i >= n - 1; i--){
        cout << s[i];
    }

    for(int i = m; i < s.size(); i++){
        cout << s[i];
    }

    return 0;
}