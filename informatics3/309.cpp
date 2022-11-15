#include <bits/stdc++.h>
using namespace std;
bool Election(bool x, bool y, bool z){
    if((x == 0 && y == 0) || (x == 0 && z == 0) || (y == 0 && z == 0)){
        return 0;
    }
    else
        return 1;
}
int main(){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << Election(x, y, z);

    return 0;
}