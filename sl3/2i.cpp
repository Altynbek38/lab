#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    int a[4];
    for(int i = 0; i < 4; i++){
        a[i] = 0;
    }
    int index = 0;
    for(int i = index; i < s.size(); i++){
        // int cnt = 0;
        // for(int j = i + 1; j < s.size(); j++){
        //     if(a[i] == a[j]){
        //         cnt++;
        //         index++;
        //     }
        //     else if(a[i] != a[j]){
        //         index++;
        //         break;
        //     }
        // }
        if(s[i] == 'B'){
            a[0]++;
        }
        else if(s[i] == 'F'){
            a[1]++;
        }
        else if(s[i] == 'L'){
            a[2]++;
        }
        else if(s[i] == 'R'){
            a[3]++;
        }
    }
    if(a[0] == a[1] && a[2] == a[3]){
        cout << "Chill Yelnur";
    }

    else if(a[0] >= a[1]){
        for(int i = 0; i < a[0] - a[1]; i++){
            cout << 'F';
        }
    }
    else if(a[0] < a[1]){
        for(int i = 0; i < a[1] - a[0]; i++){
            cout << 'B';
        }
    }
    
    if(a[2] >= a[3]){
        for(int i = 0; i < a[2] - a[3]; i++){
            cout << 'R';
        }
    }
    else if(a[2] < a[3]){
        for(int i = 0; i < a[3] - a[2]; i++){
            cout << 'L';
        }
    }

    return 0;
}
//LLFFB
//BFFLL
//BFLR
//0123