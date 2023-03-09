#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] = (int)s[i] + n;
        if((int)s[i] > 90){
            s[i]  = (int)s[i]- 26;
        }
    }
    cout << s;

    return 0;
}