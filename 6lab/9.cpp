#include <iostream>
using namespace std;

string uppercase(string s){
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z'){
            s[i] = (int)s[i] - 32;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    string ans;
    ans = uppercase(s);

    cout << ans;
}