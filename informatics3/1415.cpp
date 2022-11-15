#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string ans;

    for(int i = 0; i < s.size(); i++){
        s[i] = (int)s[i] - n;
        if((int)s[i] < 65){
            s[i] = (int)s[i] + 26;
        }
    }

    cout << s;



    return 0;
}
