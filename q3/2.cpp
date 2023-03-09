#include <bits/stdc++.h>
using namespace std;

void trust(string s){
    string word;
    long long index = 0;
    int t = 0;
    for(int i = index; i < s.size(); i++){
        if(s[i] != ' '){
            word += s[i];
            index++;
        }
        else{
            index++;
            for(int j = 0; j < word.size(); j++){
                if(word[j] >= '0' && word[j] <= '9'){
                    t = 1;
                }
            }
            if(t == 1){
                t = 0;
                word = "";
            }
            else{
                cout << word;
                cout << endl;
                t = 0;
                word = "";
                continue;
            }
        }
    }
}
int main(){
    string s;
    getline(cin, s);
    trust(s);
    return 0;
}