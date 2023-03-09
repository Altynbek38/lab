#include <bits/stdc++.h>
using namespace std;

string Lowercase(string s){

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
           
            s[i] = (int)s[i] + 32;
        }
    }    

    return s;
}
int main(){
    string s;
    cin >> s;
    
    cout << Lowercase(s);

    return 0;
}