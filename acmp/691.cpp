// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int n;
//     cin >> n;
//     string t = "ABCEHKMOPTXY";
//     int cnt = 0, ans = 0;

//     for(int k = 0; k < n; k++){
//         cnt = 0;
//         cin >> s;
//         for(int i = 0; i < t.size(); i++){
//             if(s[0] == t[i] || s[4] == t[i] || s[5] == t[i]){
//                 cnt++;
//             } 
//         }
//             if(cnt != 3){
//             cout << "No" << endl;
//             break;
        

//         for(int i = 1; i < 4; i++){
//             if(s[i] >= '0' && s[i] <= '9'){
//                 ans++;
//                 continue;
//             }
//             else{
//                 cout << "No" << endl;
//                 break;
//             }
//         }
//         if(ans == 3){
//             cout << "Yes";
//         }
//             }
//     }
   

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    string t = "ABCEHKMOPTXY";
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.size() != 6){
            cout << "No" << endl;
            continue;
        }
        if((s[1] < '0') || (s[1] > '9')){
            cout << "No" << endl;
            continue;
        }
        if((s[2] < '0') || (s[2] > '9')){
            cout << "No" << endl;
            continue;
        }
        if((s[3] < '0') || (s[3] > '9')){
            cout << "No" << endl;
            continue;
        }
        if(t.find(s[0]) == string :: npos){
            cout << "No" << endl;
            continue;
        }
        if(t.find(s[4]) == string :: npos){
            cout << "No" << endl;
            continue;
        }
        if(t.find(s[5]) == string :: npos){
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}