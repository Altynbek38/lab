#include <iostream>
using namespace std;
int main(){
    double x, y;
    cin >> x >> y;
    int day = 1;
    for(int i = 0; i < y; i++){
        if(x < y){
            x = x + x * 0.1 ;
            day++;
        }
        else if(x >= y){
            break;
        }
    }
    cout << day;
}