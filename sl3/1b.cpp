#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    if(s[0] == '8' && s[1] == '7' && s[2] == '1' && s[3] == '7'){
        cout << "Astana";
    }
    else if((s[0] == '8' && s[1] == '7' && s[2] == '2' && s[3] == '7') && (s[4] == '2' || s[4] == '3')){
        cout << "Almaty";
    }

    return 0;
}