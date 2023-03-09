#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'z' || s[i] == 'Z'){
            s[i] = (int)s[i] - 25;
        }
        else if((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y')){
            s[i] = (int)s[i] + 1;
        }
    }
    cout << s;

    return 0;
}