#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f, n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    if((a * d + b * e + c * f) <= n){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}