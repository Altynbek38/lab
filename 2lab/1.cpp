#include <iostream>
using namespace std;

int main(){
    int a, b;
    
    cin >> a;
    b = a % 2;
    
    if (a == 0){
        cout << "None" << endl;
    }else if (b == 0){
        cout << "Even" << endl;
    }else if (b == 1){
        cout << "Odd" << endl;
    }


    return 0;
}