#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int n;
   cin >> n;
   for(int i = 1; i <+ n; i++){
        if((n % 10)== 0){
            cout << "NO";
        }
        n = n/10;
   }
    cout << "YES";

   return 0;
}