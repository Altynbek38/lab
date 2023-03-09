#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string h;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            h += s[i];
        }
    }


    int m = h.size();

    for(int i = 0; i < m / 2; i++){
        if(h[i] != h[m - 1 - i]){
            cout  << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}