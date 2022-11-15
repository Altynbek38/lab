#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && a != c){
        cout << "YES";
    }
    else if(a == c && a != b){
        cout << "YES";
    }
    else if(b == c && b != a){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}