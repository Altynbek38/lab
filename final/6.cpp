#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int index = 0;
    for(int i = 0; s[i] != '@'; i++){
        if(s[i] < 97 || s[i] > 122){
            cout << "No";
            return 0;
        }
        index++;
    }
    index ++;
    for(int i = index; s[i] != '.'; i++){
        if(s[i] < 97 || s[i] > 122){
            cout << "No";
            return 0;
        }
        index++;
    }
    index++;
    for(int i = index; i < s.size(); i++){
        if(s[i] < 97 || s[i] > 122){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}