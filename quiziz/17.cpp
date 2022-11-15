#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b + c >= 70 && a + b >= 30 && c >= 20){
        cout << "YES!";
    }
    else{
        cout << "NO.";
    }


    return 0;
}