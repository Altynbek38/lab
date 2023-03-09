#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string h;

    sort(s.begin(), s.end());
    int cnt, index = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i + 1]){
            h += s[i];
        }
    }

    for(int i = 0; i < h.size(); i++){
        cnt = 0;
        for(int j = index; j < s.size(); j++){
            if(s[j] == s[j + 1]){
                cnt++;
                index++;
            }
            else if(s[j] != s[j + 1]){
                index++;
                cnt++;
                break;
            }
        }
        
        cout << h[i] << ": " << cnt << endl;
        
    }
    
    return 0;
}