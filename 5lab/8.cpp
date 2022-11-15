#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = 0, a[256];

    for(int i = 0; i < 256; i++){
        a[i] = 0;
    }

    for(int i = 0; i < s.size(); i++){
        n = s[i];
        a[n]++;
    }

    for(int i = 0; i < 256; i++){
        if( a[i] == 0){
            continue;
        }
        else if(a[n] != a[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";


    return 0;
}