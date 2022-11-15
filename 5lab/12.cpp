#include <iostream>
using namespace std;
int main(){
    string target;
    cin >> target;
    int cnt = 0;
    
    for(int i = 0; i <= target.size(); i++){
        if(target[i] <= target[i + 1]){
        cnt++;
        }
    }

    if(cnt == target.size()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}