#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    c = (b / 100) + (b % 10); 
    cout << a + c << endl;


    return 0;
}