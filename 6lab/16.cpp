#include <iostream>
using namespace std;

int positive( int n){
    if(n < 0){
        n = n * (-1);
        return n;
    }
    else{
        return n;
    }
}

int main(){
    int n;
    cin >> n;

    n = positive(n);
    cout << n;
}