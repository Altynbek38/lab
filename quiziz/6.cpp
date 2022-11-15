#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    if(e <= c && e >= a && f <= b && f >= d ){
        cout <<"yes";
    }
    else{
        cout <<"no";
    }
    return 0;
}