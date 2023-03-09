#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, c;
    cin >> c >> s;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    if(c == s){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}