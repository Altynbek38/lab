#include <bits/stdc++.h>
using namespace std;
string sbool(string s){
        if(s == "1"){
            return "true";
        }
        else if(s == "0"){
            return "false";
        }
        else{
            return s;
        }
    
}
int main(){
    string s;
    getline(cin, s);

    cout << sbool(s);
    return 0;
}