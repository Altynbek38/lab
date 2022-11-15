#include <iostream>
using namespace std;
int main(){
    string s;
    char c;
    int n, cnt;
    cin >> s >> c >> n;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}