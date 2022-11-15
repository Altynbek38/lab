#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, m;
    cin >> s >> n >> m; 
    char temp;

    temp = s[n - 1];
    s[n - 1] = s[m - 1];
    s[m - 1] = temp;

    cout << s;

    return 0;
}