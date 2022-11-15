#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, n;
    cin >> x >> y >> n;
    
    int arr[n][4];
    for(int a = 0; a < n; a++){
        for(int b = 0; b < 4; b++){
            cin >> arr[a][b];
        }
    }

    int board[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            board[i][j] = 0;
        }
    }    

    

     for(int a = 0; a < n; a++){
            for(int i = 0; i < x; i++){
                for(int j = 0; j < y; j++){
                    if(i >= arr[a][1] && i <= arr[a][3] && j >= arr[a][4] && j <= arr[a][2]){
                        board[i][j] = 1;
                    }
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

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << cnt;

    return 0;
}