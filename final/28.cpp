#include <bits/stdc++.h>
using namespace std;
bool account(string s){
    int index = 1;
    if(s[0] == '.' || s[0] == '@' || s[s.size() - 1] == '.' || s[s.size() - 1] == '@'){
        return false;
    }
    for(int i = 0; s[i] != '@'; i++){
        if((int)s[i] < 97 || (int)s[i] > 122){
            return false;
        }
        index++;
    }
    index++;
    for(int i = index; s[i] != '.'; i++){
        if((int)s[i] < 97 || (int)s[i] > 122){
            return false;
        }
        index++;
    }
    index++;
    for(int i = index; i < s.size(); i++){
        if((int)s[i] < 97 || (int)s[i] > 122){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int index = 1;

    if(account(s)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}