#include <iostream>
using namespace std;
int main(){
    string arc;
    cin >> arc;
    int n;
    n = arc.length();
    
    
    for(int i = 0; i < n; i++){
        (int)arc[i];
        if((int)arc[i] >= 97 && (int)arc[i] <= 122){
            arc[i] =(int)arc[i] - 32;
        }
    }

    cout << arc << endl;

    return 0;
}