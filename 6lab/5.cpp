#include <bits/stdc++.h>

using namespace std;
float pif(int a, int b){
    float c = a * a + b * b;
    float d = sqrt(c);
    return d;
}

int main(){
    int a, b;
    cin >> a >> b;
    float d = pif(a, b);
    cout << setprecision(4) << d;
    return 0;
}