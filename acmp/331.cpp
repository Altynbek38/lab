#include <bits/stdc++.h>
using namespace std;
int main(){ 
    string s;
    int h, m;
    cin >> s >> h >> m;
  
    int h2 = ((int)s[0] - 48) * 10 + ((int)s[1] - 48);
    int m2 = ((int)s[3] - 48) * 10 + ((int)s[4] - 48);

    m2 += m;
    if(m2 >= 60){
        m2 -= 60;
        h2++;
    }

    h2 += h;

    while(h2 >= 24){
        h2 -= 24;
    }

    if(h2 < 10){
        cout << 0;
    }   
    cout << h2 << ':';
    if(m2 < 10){
        cout << 0;
    }
    cout << m2;

    return 0;
}