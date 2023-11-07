#include <iostream>

using namespace std;

int main(){
    char name;
    cout<<"Enter character";
    cin>>name;
    switch (name){
        case 'a':
            cout<<"ITS A";
            break;

        case 'b':
            cout<<"ITS B";
            break;

        default:
            cout<<"IDK";
    }
}


