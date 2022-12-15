#include <iostream>

using namespace std;

int main(){
    int option = 1;
    switch(option){
        case 0:
            cout<<"The case is 0"<<endl;
            break;
        case 1:
            cout<<"The case is 1"<<endl;
            break;
        case 2:
            cout<<"The case is 2"<<endl;
            break;
        case 3:
            cout<<"The case is 3"<<endl;
            break;
        default:
            cout<<"The case is default"<<endl;
            break;
    }
    cout<<"--------------------------------"<<endl;
    return 0;
}