#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int a, b, c;
    cin >> a >> b;
    c = sum(a, b);
    cout << c;
}