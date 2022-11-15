#include <iostream>
using namespace std;

int main(){
    int n, b = 0 , c ;
    cin >> n;
    
    for(int i = 1; i <= n; i++ ){
        int a;
        
        cin >> a;

        c = a % 10;
        if ( c == 7 ){
            b++;           
        }
     }
     cout << b;

    return 0;
}