#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    cin >> c >> s;

    s.erase(remove(s.begin(), s.end(), c));

    cout << s;

    return 0;
}