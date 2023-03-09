#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, m, y;
    cin >> d >> m >> y;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d < 31){
            d++;
        }
        else if(d == 31 && m == 12){
            d = 1;
            m = 1;
            y++;
        }
        else{
            d = 1;
            m++;
        }
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d < 30){
            d++;
        }
        else{
            d == 1;
            m++;
        }
    } 
    else if(m == 2){
        if(y % 400 == 0){
            if(d < 29){
                d++;
            }
            else if(d == 29){
                d = 1;
                m++;
            }
        }
        else if(y % 100 == 0){
            if(d < 28){
                d++;
            }
            else if(d == 28){
                d = 1;
                m++;
            }
        }
        else if(y % 4 == 0){
            if(d < 29){
                d++;
            }
            else if(d == 29){
                d = 1;
                m++;
            }
        }
        else{
            if(d < 28){
                d++;
            }
            else if(d == 28){
                d = 1;
                m++;
            }
        }
    }
    cout << d << " " << m << " " << y;

    return 0;
}