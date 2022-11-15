#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0, digit;
    for(int i = 0; n > 0; i++){
        digit = n % 10;
        sum = sum + digit;
        n = n /10;
    }
    cout << sum;

    return 0;
}