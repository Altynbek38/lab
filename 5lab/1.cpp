#include <iostream>
using namespace std;
int main(){
    string let;
    cin >> let;
    int lowcase = 0, uppcase = 0;

    for(int i = 0; i < let.length(); i++){
        if(let[i] >= 'A' && let[i] <= 'Z'){
            uppcase++;
        }
        else if(let[i] >= 'a' && let[i] <= 'z'){
            lowcase++;
        }
    }

    cout << lowcase << " " << uppcase << endl;


    return 0;
}