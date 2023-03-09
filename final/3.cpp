#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i = 100; i < 1000; i++){
        int f, s, t;
        f = i / 100;
        s = (i / 10) % 10;
        t = i % 10;
        if(f + s + t == n){
            cout << f << s << t << endl;
        }
        if(f == n){
            return 0;
        }
    }

    return 0;
}
