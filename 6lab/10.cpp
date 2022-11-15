#include <iostream>
using namespace std;
int max(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d){
        return a;
    }
    else if(b >= a && b >= c && b >= d){
        return b;
    }
    else if(c >= a && c >= b && b >= d){
        return c;
    }
    else if(d >= a && d >= b && d >=c){
        return d;
    }
}

int main(){
    int a, b, c, d, maxnum;
    cin >> a >> b >> c >> d;

    maxnum = max(a, b, c, d);
    cout << maxnum;

    return 0;
}