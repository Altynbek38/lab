#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string abi;
    string hazik;
    cin >> abi >> hazik;

    size_t found = abi.find(hazik);
    if(found != string :: npos){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


    return 0;
}