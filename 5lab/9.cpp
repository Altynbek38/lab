#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                t[j] = '@';
                cnt++;
                break;
            }
        }
    }

    if(s.size() >= t.size()){
        if(s.size() == cnt){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else if(s.size() < t.size()){
        if(t.size() == cnt){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    cout << endl;
    return 0;
}