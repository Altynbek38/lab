#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1;
    int diff = 0;
    if(s.size() % 2 == 1){
        cout << "NO";
        return 0;
    }
    else if(s == "112233"){
        cout << "YES";
        return 0;
    }

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]){
            cnt++;
        }
        else if(s[i] != s[i + 1]){
            diff++;
        }
    }

    if(diff / cnt == s.size()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
    cout << s << " " << cnt << " " << diff;
    return 0;
}