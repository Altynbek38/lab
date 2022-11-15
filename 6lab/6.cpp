#include <iostream>
using namespace std;
int number(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s;
    int n, cnt;
    cin >> s >> n;

    cnt = number(s, n);

    if(cnt >= n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
