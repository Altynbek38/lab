#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int c, b;
    cin >> c >> b;
    int temp = 0;
   for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            temp = a[i][b];
            a[i][b] = a[i][c];
            a[i][c] = temp;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

  // put your code here
  return 0;
}