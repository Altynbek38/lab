#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), '@'), s.end());
    cout << s;
    return 0;
}