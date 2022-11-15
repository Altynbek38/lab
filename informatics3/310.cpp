#include <iostream>
#include <cmath>
using namespace std;
void prime(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << "composite";
            return;
        }
    }
    cout << "prime";
}
int main(){
    long long n;
    cin >> n;
    prime(n);
    return 0;
}