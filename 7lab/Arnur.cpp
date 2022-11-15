#include <iostream>
using namespace std;
int main(){
    cout << "Hi!" << endl;
    string hi;
    cin >> hi;

    cout << "What is your name, dude?" << endl;

    string name;
    cin >> name;
    cout << "How are you " << name << "?" << endl;

    cout << "Where are you from?" << endl;
    string city;
    cin >> city;
    cout << "Pretty good, I am from Urzikstan" << endl;

    cout << "Who do you want to become? Could you tell me about it? (profession)" << endl;
    string dream;
    cin >> dream;
    cout << "I am sure that you will become a " << dream << endl; 
    cout << "I want to tell you about something. May I ?" << endl;
    string yes;
    cin >> yes;

    for(int i = 0; i < name.size(); i++){
        if((int)name[i] >= 97 && (int)name[i] <= 122){
            name[i] = (int)name[i] - 32;
        }
    }

    cout << "F U C K y o u " << name << endl;
    
}