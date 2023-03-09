#include <bits/stdc++.h>
using namespace std;

void truth(string h){
    for(int i = 0; i < h.size(); i++){
        if(h[i] <= '9' && h[i] >= '0'){
            return;
        }
    }
    cout << h << endl;
}
int main(){
    string s;
    getline(cin, s);
    string h = "";
    s += ' ';
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            h += s[i];
        }
        else{
            truth(h);
            h = "";
        }
    }
    return 0;
}