#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    int first, last;

    for(int i = 0; i < n; i++){
        if(s[i] == 'h'){
            first = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'h'){
            last = i;
            break;
        }
    }

    reverse(s.begin() + first + 1, s.begin() + last);

    cout << s << endl;


    return 0;
}