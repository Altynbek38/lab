#include <bits/stdc++.h>
using namespace std;
int main(){
    string target, word;
    cin >> target >> word;

    size_t found = word.find(target);
    if(found != string :: npos){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}