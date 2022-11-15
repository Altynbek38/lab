#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - front, back
    string line = "hello my name is kbtu";

    cout << line[0] << " " << line[line.size() - 1] << endl;
   

    return 0;
}

 for(int i = 0; i < n; i++){
        int found = vowel.find('a');
            if(found != -1){
            ans++;
            
        }
    }
    for(int i = 0; i < n; i++){
        found = vowel.find('e');
            if(found != -1){
            ans++;
        }
    }
    for(int i = 0; i < n; i++){
        found = vowel.find('i');
            if(found != -1){
            ans++;
        }
    }
    for(int i = 0; i < n; i++){
        found = vowel.find('o');
            if(found != -1){
            ans++;
        }
    }
    for(int i = 0; i < n; i++){
        found = vowel.find('u');
            if(found != -1){
            ans++;
        }
    }
    cout << ans;


    #include <iostream>
using namespace std;
int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string target;
    cin >> target;
    bool first;
    bool second;
    int found = alphabet.find(target);
    if(found != -1){
        first = true;
    }
    else{
        first = false;
    }

    int sfound = target.find(alphabet);
    if(sfound != -1){
        second = true;
    }
    else{
        second = false;
    }

    if(first == true || second == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}