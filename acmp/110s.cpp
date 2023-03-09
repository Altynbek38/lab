#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9' && s[i + 1] == '.'){
            cnt++;
        }
    }
    string t;
    string h;
    int cnt4 = 0;
    int k;
    int l;
    int cnt2 = 0;
    if (cnt == 3 && s.size() <= 15){
         for (int i = 0; i < s.size(); i++){
            if (s[i] >= '0' && s[i] <= '9'){
                t = t + s[i];
            }
            if (s[i] == '.'){
                k = stoi(t);
            if (k <= 255){
                cnt2++;
            }
            k = 0;
            t = "0";
            }
        }
        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] >= '0' && s[i] <= '9'){
                h = h + s[i];
            }
            if (s[i] == '.'){
                reverse (h.begin(),h.end());
                l = stoi(h);
                if (l <= 255){
                    cnt2++;
                }
                break;
            }
        }
     }
       if (cnt2 == 4){
         cout << 1;
      }
      else {
         cout << 0;
     }
}