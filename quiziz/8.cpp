#include <iostream>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    a = a + b;
    b = a / 10;

    if(c > b){
        cout << "Boris, you are punished!";
    }
    else{
        cout << "You are my sweet baby";
    }
    return 0;
}