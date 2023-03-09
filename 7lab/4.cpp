#include <bits/stdc++.h>
using namespace std;
int sum(string s, int a, int b){
    if(a == s.size()){
        return b;
    }
    else 
        b = b + (s[a] - '0');
        return sum(s, a + 1,b);
}
int main(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    cout << sum(s, a, b);
    return 0;
}