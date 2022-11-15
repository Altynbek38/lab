#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string first, second;
    int cnt = 1;
    for(int i = 0; s[i] != ' '; i++){
        first[i] = s[i];
        cnt++;
    }

    for(int i = cnt; i < s.size() ;i++){
        second[i] = s[i];
    }    

    cout << second << " " << first;
return 0;
}