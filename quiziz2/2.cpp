#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, n;
    cin >> x >> y >> n;

    int board[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            board[i][j] = 0;
        }
    }

    int x1, y1, x2, y2;
    for(int k = 0; k < n; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                board[i][j] = 1;
            }
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(board[i][j] == 0){
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}