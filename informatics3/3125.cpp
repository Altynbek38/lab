#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    size_t found = s.find('1');
    while(found != string :: npos){
        s.replace(found, 1 , "one");
        found = s.find("1", found);
    }

    cout << s;



    return 0;
}