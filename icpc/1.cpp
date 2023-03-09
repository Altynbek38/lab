#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c, n, sum = 0;
    
    cin >> n >> a >> b;

    c = (b - a) / n;
    for(double i = a; i <= b; i = i + c){
        if(i == a || i == b){
            sum += pow(i, 3) + i;
        }
        else{
            sum += 2 * (pow(i, 3) + i);
        }
    }

    cout << c * 0.5 * sum;
    return 0;
}