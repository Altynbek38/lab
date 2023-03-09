#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int temp;
    int a[3];
    a[0] = 1; a[1] = 0; a[2] = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        else if(s[i] == 'B'){
            temp = a[2];
            a[2] = a[1];
            a[1] = temp;

        }
        else if(s[i] == 'C'){
            temp = a[0];
            a[0] = a[2];
            a[2] = temp;
        }
    }

    for(int i = 0; i < 3; i++){
        if(a[i] == 1){
            cout << i + 1;
            break;
        }
    }
    return 0;
}