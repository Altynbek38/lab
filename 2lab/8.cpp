#include <iostream>
using namespace std;

int main(){
    long long n,odd=0,even=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a%2){
            odd++;
        }
        else even++;
    }
    cout<<even<<" "<<odd;
    return 0;
}