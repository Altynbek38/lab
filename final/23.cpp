#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, h;
    cin >> s >> h;

    if(s.find(h) != string :: npos){
        cout << s;
        return 0;
    }
    else if(h.find(s) != string :: npos){    
        cout << h;
        return 0;
    }
    else{
        for(int i = 0; i < h.size(); i++){
            if(h[i] == s[s.size() - 1]){
                s.erase(s.begin() + s.size() - 1);
            }
            else{
                break;
            }
        }
    }

    cout << s + h;

    return 0;
}