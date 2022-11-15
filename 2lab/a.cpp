#include <iostream>
using namespace std;

int main(){
    long long n,odd=0,even=0;
    n = 999999999;
    for(int i=100000000;i<=n;i++){
        int sum = 0;
        sum = ((i /100000000) + (i / 10000000)%10+(i/1000000)%10+(i/100000)%10+(i/10000)%10+(i/1000)%10+(i/100)%10+(i%10));
        if(sum%2){
            odd++;
        }
        else even++;
    }
    cout<<even<<" "<<odd;
    return 0;
}