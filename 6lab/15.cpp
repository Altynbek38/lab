#include <iostream>
using namespace std;

int lucky(int n){
    int digit, sum;
    int last = n % 10;
    for(int i = 0; n > 0; i++){
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    if(sum % last == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    int ans = lucky(n);

    if(ans == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}