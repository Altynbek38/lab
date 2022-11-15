#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1, p;
    while(i * i <= n){
        p = i * i;
        cout << p << endl;
        i++;
    }
    return 0;
}