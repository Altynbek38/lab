#include <iostream>
using namespace std;
int main(){
    string vowel;
    cin >> vowel;
    int n, ans = 0;
    n = vowel.size();

    for(int i = 0; i < n; i++){
        if(vowel[i] == 'a'){
            ans++;
            vowel[i] = '@';
        }
    }
    for(int i = 0; i < n; i++){
         if(vowel[i] == 'e'){
            ans++;
            vowel[i] = '@';
        }
    }
    for(int i = 0; i < n; i++){
         if(vowel[i] == 'i'){
            ans++;
            vowel[i] = '@';
        }
    }
    for(int i = 0; i < n; i++){
         if(vowel[i] == 'o'){
            ans++;
            vowel[i] = '@';
        }
    }
    for(int i = 0; i < n; i++){
        if(vowel[i] == 'u'){
            ans++;
            vowel[i] = '@';
        }
    }
    cout << ans;

    return 0;
}