#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    int product = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
           
            sum += (s[i]-'0');

            product *= (int)s[i] - 48;
        }
    }

    cout << product + sum;

//hefkfhk4fj5

    return 0;
}