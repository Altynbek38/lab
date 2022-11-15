#include <iostream>
using namespace std;
int main(){
    string palindrom;
    cin >> palindrom;
    int n = palindrom.size();
    int ans = 0;

    for(int i = 0; i < n / 2; i++){
        if(palindrom[i] == palindrom[n - 1 - i]){
            ans++;
        }
    }

    if(ans == n/2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}