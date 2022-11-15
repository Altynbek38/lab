#include <iostream>
using namespace std;

int main(){
    int a, b, c = 0;
    cin >> a;

    for (b = 1; b <= a; b++){
        c += b;
    }
    cout << c << endl;
    return 0;
}