#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    queue <char> q;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(i == s.size() - 1 && s[i] == '1'){
            if(cnt % 2 == 0){
                q.push('1');
            }
            else continue;;
        }
        else if(s[i] == '0'){
            if(cnt % 2 == 1){
                cnt = 0;
                q.push('1');
            }
            q.push('0');
        }
        else{
            cnt++;
        }
    }

    while(!q.empty()){
        cout << q.front();
        q.pop();
    }

    return 0;
}