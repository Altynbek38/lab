#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'z'){
            s[i] = (int)s[i] + 1;
        }
        else if(s[i] == 'z'){
            s[i] = 'a';
        }
    }

    cout << s;
    return 0;
}