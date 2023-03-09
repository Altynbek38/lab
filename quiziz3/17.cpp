#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        //size_t found = s.find("@gmail.com");
        if(s.find("@gmail.com") != string :: npos){
            for(int i = 0; s[i] != '@'; i++){
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}