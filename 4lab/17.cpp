#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n];
    
    
    int cnt = n;
    for(int i = 1; i <= n; i++){
        for(int p = 1; p <= (cnt - 1) ; p++){
            cout << ".";
        }
        cnt--;
        for(int j = 1; j <= (2 * i) - 1; j++){
            cout << "*";
        }
        for(int k = 1; k <= cnt; k++){
            cout <<".";
        }
        cout << endl;
    }



    return 0;
}