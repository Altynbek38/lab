#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0, mx = 0;

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        sum = sum + a;
        if(a >= mx){
            mx = a;
        }
       
    }

   
    cout << sum << " " << mx;
    return 0;
}