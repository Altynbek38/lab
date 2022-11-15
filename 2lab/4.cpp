#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b;
   
    if(a < b){
        cout << "2" << endl;
    }
    else if (a > b){
       c = ceil((2 * a) / b);
        cout << c << endl;  
    }
 
    return 0;
}