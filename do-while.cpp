#include <iostream>

using namespace std;

int main(){
    char answer;
    bool feelings = true;
    while(feelings == true){
        cout<<"Do you love me?"<<endl;
        cout<<"YES (y) or NO (n)"<<endl;
        cin>>answer;
        if(answer=='y'){
            feelings = true;
            cout<<"Love u too"<<endl;
        }
        else{
            feelings = false;
            cout<<"Was good on the time it worked"<<endl;
        }
    }
    bool love = false;
    do{
        cout<<"recuerda que tu tienes que estudiar"<<endl;
    }
    while (love == false);

    return 0;
}