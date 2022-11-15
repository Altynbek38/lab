#include <iostream>
using namespace std;
int main() {
    int n, m, x, y, a, b, c, d;
    cin >> a >> b >> x >> y;
    if(n >= m && x >= y ){
        a = n - y;
        b = m - x;
        if(x >= a && y >= b && a >= 0 && b >= 0){
            if(a >= b){
                cout << b;
            }
            else if(a <= b)
            cout << a;
        }
        else if(x <= a && y <= b && a >= 0 && b >= 0){
            if(x >= y){
                cout << y;
            }
            else if(x <= y)
            cout << x;
        }
        else if(x <= a && y >= b && a >= 0 && b >= 0){
            if(x >= b){
                cout << b;
            }
            else if(x <= b)
            cout << x;
    }
    else if(x >= a && y <= b && a >= 0 && b >= 0){
            if(a >= y){
                cout << y;
            }
            else if(a <= y)
            cout << a;
    }
    }
      
    else if(n >= m && x <= y ){
        a = n - x;
        b = m - y;
        if(x >= a && y >= b && a >= 0 && b >= 0){
            if(a >= b){
                cout << b;
            }
            else if(a <= b)
            cout << a;
        }
        else if(x <= a && y <= b && a >= 0 && b >= 0){
            if(x >= y){
                cout << y;
            }
            else if(x <= y)
            cout << x;
        }
        else if(x <= a && y >= b && a >= 0 && b >= 0){
            if(x >= b){
                cout << b;
            }
            else if(x <= b)
            cout << x;
    }
    else if(x >= a && y <= b && a >= 0 && b >= 0){
            if(a >= y){
                cout << y;
            }
            else if(a <= y)
            cout << a;
    }
    }

    else if(n <= m && x >= y ){
        a = m - y;
        b = n - x;
        if(x >= a && y >= b && a >= 0 && b >= 0){
            if(a >= b){
                cout << b;
            }
            else if(a <= b)
            cout << a;
        }
        else if(x <= a && y <= b && a >= 0 && b >= 0){
            if(x >= y){
                cout << y;
            }
            else if(x <= y)
            cout << x;
        }
        else if(x <= a && y >= b && a >= 0 && b >= 0){
            if(x >= b){
                cout << b;
            }
            else if(x <= b)
            cout << x;
    }
    else if(x >= a && y <= b && a >= 0 && b >= 0){
            if(a >= y){
                cout << y;
            }
            else if(a <= y)
            cout << a;
    }
    }

    else if(n <= m && x <= y ){
        a = n - y;
        b = m - x;
        if(x >= a && y >= b && a >= 0 && b >= 0){
            if(a >= b){
                cout << b;
            }
            else if(a <= b)
            cout << a;
        }
        else if(x <= a && y <= b && a >= 0 && b >= 0){
            if(x >= y){
                cout << y;
            }
            else if(x <= y)
            cout << x;
        }
        else if(x <= a && y >= b && a >= 0 && b >= 0){
            if(x >= b){
                cout << b;
            }
            else if(x <= b)
            cout << x;
    }
    else if(x >= a && y <= b && a >= 0 && b >= 0){
            if(a >= y){
                cout << y;
            }
            else if(a <= y)
            cout << a;
    }
    }   
    
    
  // put your code here
  return 0;
}