#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long even = 0, odd = 0;

    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            odd += s[i] - '0';
        }
        else if(i % 2 == 1){
            even += s[i] - '0';
        }
    }

    if(even == odd){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
