#include <iostream>
using namespace std;

char uppercase(char n){
    if((int)n >= 97 && (int)n <= 122){
        n = (int)n - 32;
        return n;
    }
    else{
        return n;
    }
}

int main(){
    char n;
    cin >> n;

    n = uppercase(n);
    cout << n;
}