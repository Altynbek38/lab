#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    cin >> a;

    b = sqrt(a);
    if(b * b == a){
        cout << "Perfecto";
    }
    else{
        cout << "Simple";
    }

    return 0;
}