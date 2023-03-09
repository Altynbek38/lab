#include <bits/stdc++.h>
using namespace std;
int even(string s, int a, int b){
    if(a == s.size()){
        return b;
    }
    else{
        if((s[a] - '0') % 2 == 0){
            return even(s, a + 1, b + 1);
        }
        else{
            return even(s, a + 1, b);
        }
    }
}


int main(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    cout << even(s, a, b);
    return 0;
}