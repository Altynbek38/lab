#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    int cnt = 0, mx = 0, index;

    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            cnt++;
        }
        else{
            if(cnt > mx){
                mx = cnt;
                index = i - cnt;
            }
            cnt = 0;
        }
        if(cnt > mx){
            mx = cnt;
            index = i - cnt + 1;
        }
    }

    for(int i = index; i < index + mx; i++){
        cout << s[i];
    }
    cout << endl;
    cout << mx << endl;

    return 0;
}

// #include <iostream>

// using namespace  std;

// int main() {

//    int c=0,max=0,d;

//    string s;

//    getline(cin,s);

//    for(int i=0;i<s.size();i++)
   
//    {   if(s[i]!=' ')c++;

//        else {

//            if(c>max){max=c;

//            d=i-c; }

//            c=0;

//        } if(c>max){max=c;

//            d=i-c+1; }  

//    }

//    for(int i=d;i<d+max;i++)

//    cout << s[i] ;

//    cout << endl << max;

//    return 0;

// }