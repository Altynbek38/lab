#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    int first, last;

    size_t found = s.find('f');
    if(found != string :: npos){

    }
    else{
        cout << -2 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == 'f'){
            first = i;
            break;
        }
    }

    // for(int i = n - 1; i >= 0; i--){
    //     if(s[i] == 'f'){
    //         last = i;
    //     }
    // }

    // if(first == last){
    //     cout << -1 << endl;
    //     return 0;
    // }

    s.erase(s.begin(), s.begin() + first + 1);

    int size = s.size();
    for(int i = 0; i < size; i++){
        if(s[i] == 'f'){
            cout << i + first + 1<< endl;
            return 0;
        }
    }

    cout << -1 << endl;
   
    return 0;
}