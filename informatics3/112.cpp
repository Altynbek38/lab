#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    long long n = s.size() / 2;

    for(int i = 0; i < n; i++){
        if(s[i] != s[n - i - 1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}