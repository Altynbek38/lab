#include <bits/stdc++.h>
using namespace std;
int main(){ 
    string s;
    getline(cin, s);
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += (int)s[i];
    }

    if(sum > 300){
        cout << "It is tasty!";
    }
    else{
        cout << "Oh, no!";
    }



    return 0;
}