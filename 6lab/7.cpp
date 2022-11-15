#include <bits/stdc++.h>
using namespace std;
string valid(string s){
    string letters = "AaEeIiOoUuYy";
    string out;
    for(int i = 0; i < s.size(); i++){
        if((s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u')){
            out += s[i];
        }
    }
    return out;

    // s.erase(remove(s.begin(), s.end(), 'A'));
    // s.erase(remove(s.begin(), s.end(), 'a'));
    // s.erase(remove(s.begin(), s.end(), 'E'));
    // s.erase(remove(s.begin(), s.end(), 'e'));
    // s.erase(remove(s.begin(), s.end(), 'I'));
    // s.erase(remove(s.begin(), s.end(), 'i'));
    // s.erase(remove(s.begin(), s.end(), 'O'));
    // s.erase(remove(s.begin(), s.end(), 'o'));
    // s.erase(remove(s.begin(), s.end(), 'U'));
    // s.erase(remove(s.begin(), s.end(), 'u'));
    // s.erase(remove(s.begin(), s.end(), 'Y'));
    // s.erase(remove(s.begin(), s.end(), 'y'));
    // return s;
}

int main(){
    string s;
    getline(cin, s);
    string out;
    out = valid(s);
    cout << out;
    return 0;
}