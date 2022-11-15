#include <iostream>
using namespace std;
int main(){
    int n;
    int a, b = 0, c = 1;
    cin >> n;
    for(int i = 1; n != 0; i++){
        a = n % 10;
        b = b + a;
        c = c * a;
        n = n / 10;
    }
   
        cout << b + c;
    
    return 0;
}