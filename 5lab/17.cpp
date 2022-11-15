#include <bits/stdc++.h>
using namespace std;
int main(){
    string target, word;
    cin >> target >> word;
    int n = word.size() / target.size();
    string ans;
    while(n > 0){
        ans = ans + target;
        n--;
    }

    if(ans == word){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}