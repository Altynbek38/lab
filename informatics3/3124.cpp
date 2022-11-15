#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.size();
    int first, last;
    string s1 = s;
   
    for(int i = 0; i < n; i++){
        if(s[i] == 'h'){
            first = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'h'){
            last = i;
            break;
        }
    }
    s.erase(last);
 
    s1.erase(s1.begin(), s1.begin() + first + 1);
    
    cout <<  s + s1;                       //In the hole in the ground there lived a 
                //e hole in the ground there lived a hobbit
                            //In the hole in the ground there lived a hobbit

    return 0;
    //In the hole in the ground there lived a e hole in the ground there lived a hobbit
    //In the hole in the ground there lived a e hole in the ground there lived a hobbit
}