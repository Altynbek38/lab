#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    int cnt = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 32){
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}