#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = s.size();
    int i = n - 1;
    int j = 0;

    if(n == 2){
        cout << "YES";
        return 0;
    }

    else if(n % 2 == 1){
        j = 1;
        while(j < i){
            if(s[j] != s[i]){
                cout << "NO";
                return 0;
            }
            j++;
            i--;
        }
    }

    else if(n % 2 == 0){
        j = 0;
        while(j < i){
            if(s[j] != s[i]){
                cout << "NO";
                return 0;
            }
            j++;
            i--;
        }
    }

    cout << "YES";

    return 0;
}