#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 2; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout << i << " is prime" << endl;
        }
        cnt = 0;

    }




    return 0;
}