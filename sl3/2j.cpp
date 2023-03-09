#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, m;
    cin >> s >> n >> m;
    char a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = 'X';
        }
    }
    a[0][0] = '*';
    int ver= 0, hor = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'D'){
            ver++;
        }
        else if(s[i] == 'U'){
            ver--;
        }
        else if(s[i] == 'L'){
            hor--;
        }
        else if(s[i] == 'R'){
            hor++;
        }
        a[ver][hor] = '*';
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}