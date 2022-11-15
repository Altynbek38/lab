#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(i % 3 != 0){
            cout << s[i];
        }
    }

    return 0;
}