#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int digit = 0, c;
    for(int i = 0; n != 0; i++){
        digit = n % 10;
        if(digit == 0){
            cout << "NO";
            return 0;
        }
        n = n / 10;
    }
    cout << "YES";

    return 0;
}