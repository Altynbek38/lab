#include <iostream>
using namespace std;
int valid(string n){
    int cnt;
    for(int i = 0; i < n.size(); i++){
        if(n[i] % 2 == 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string n;
    cin >> n;
    int cnt = valid(n);
    if(cnt == n.size()){
        cout << "Valid";
    }
    else{
        cout <<"Not valid";
    }
}