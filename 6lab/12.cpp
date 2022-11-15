#include <bits/stdc++.h>
using namespace std;

string didgit(string s, int n){
    int cnt = 0;
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
            if(cnt == n){
                ans = "Valid";
                return ans;
            }
        }
        else{
            cnt = 0;
        }
    }
    ans = "Not valid";
    return ans;
}

int main(){
    string s;
    int n;
    cin >> s >> n;
    string ans = didgit(s, n);
    cout << ans;
    return 0;
}