#include <iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        while(a>0){
            if(a%10==0)ans++;
            a/=10;
        }
    }
    cout<<ans;
    return 0;
}
/*
101
101/10=10
10
10/10=1
1
*/