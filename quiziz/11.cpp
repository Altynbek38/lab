#include <iostream>
using namespace std;
int main(){
    int passengers, stop = 1;
    cin >> passengers;

    for(int i = 1; passengers > 0; i++){
        if(i % 7 == 0){
            passengers = passengers + 0;
        }
        else if ( i % 2 == 1){
            passengers = passengers + 3;
        }
        else if( i % 2 == 0){
            passengers = passengers - 4;
        }
        stop++;
    }
    cout << stop << endl;
}