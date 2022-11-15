#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int first, last;
    int n = s.size();

    size_t found = s.find('f');
    if(found != string :: npos){

    }
    else{
        return 0;
    }
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'f'){
            first = i;
            break;
        }
    }
    
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'f'){
            last = i;
            break;
        }
    }
    if(first == last){
        cout << first;
    }
    else 
        cout << first << " " << last;
}