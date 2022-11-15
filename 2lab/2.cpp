#include <iostream>
using namespace std;

int main(){
    int a, b;
   
   cin >> a;

    b = a % 2;
    if (b == 1){
        cout << "Super" << endl;
    }
    else if (a <= 5 && a >= 2 && b == 0){
        cout << "Not Super" << endl;
    }
    else if (a <= 20 && a >= 6 && b == 0){
        cout << "Super" << endl;
    }
    else if (a > 20 && b == 0){
        cout << "Not Super" << endl;
    }

    return 0;
} 