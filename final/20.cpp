#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s, k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> k;
        reverse(s.begin(), s.end());
        reverse(k.begin(), k.end());
        int a, b;
        a = stoi(s);
        b = stoi(k);
        a += b;
        s = to_string(a);
        reverse(s.begin(), s.end());
        a = stoi(s);
        s = to_string(a);
        cout << s << endl;
    }



    return 0;
}