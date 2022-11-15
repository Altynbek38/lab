#include <iostream>
using namespace std;

int SumofDigit(int n){
    int sum = 0;
    int digit = 0;
    for(int i = 0; n > 0; i++){
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int sum = SumofDigit(n);
    cout << sum;
}