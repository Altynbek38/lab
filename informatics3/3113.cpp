#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1 = s, s2 = s;
    int n = s.size();
    cout << s[2] << endl;
    cout << s[s.size() - 2] << endl;
    cout << s.erase(5) << endl;
    cout << s1.erase(n - 2) << endl;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << s2[i];
        }
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            cout << s2[i];
        }
    }
    cout << endl;

    for(int i = n - 1; i >= 0; i--){
        cout << s2[i];
    }
    cout << endl;
    reverse(s2.begin(), s2.end());
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << s2[i];
        }
    }
    cout << endl;
    cout << n << endl;
}