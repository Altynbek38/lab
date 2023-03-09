#include <bits/stdc++.h>
using namespace std;

bool sq_root(char first, char second){
    if(first == '0'){
        return false;
    }
    int n = (first - 48) * 10 + (second - 48);
    int m = sqrt(n);
    if(n == m * m){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    stack <char> st;

    for(int i = 0; i < s.size(); i++){
        if(!st.empty()){
            if(sq_root(st.top(), s[i])){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else st.push(s[i]);
    }

    if(st.empty()){
        cout << "Stack is empty";
        return 0;
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }


    return 0;
}