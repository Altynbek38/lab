#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s.size() == 9){
        if(s[0] <= '2' && s[1] <= '9' && s[2] <= '9' && s[4] <= '9' && s[6] <= '9' && s[8] <= '9'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }

    else if(s.size() == 12){
        if(s[0] <= '2' && s[1] <= '9' && s[2] <= '9' && s[4] <= '9' && s[5] <= '9' && s[6] <= '9' && s[8] <= 9 && s[10] >= '9' && s[11] >= '9'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }

    else if(s.size() == 14){
        if(s[0] <= '2' && s[1] <= '9' && s[2] <= '9' && s[4] <= '9' && s[5] <= '9' && s[7] <= '9' && s[8] <= 9 && s[9] >= '9' && s[11] >= '9' && s[12] >= '9' && s[13] >= '9'){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }


    return 0;
}

// 127.0.0.0
// 192.168.0.01
// 255.00.255.255