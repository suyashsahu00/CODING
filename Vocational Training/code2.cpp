#include <iostream>
using namespace std;
int main(){
    website();
    return 0;
}

void website(){
    greet();
    login();
}

login(){
    string userName,passward;
    cout<<"username: ";
    cin >>userName;
    cout<<"passward: ";
    cin >>passward; 
    if (userName="guest-00013" && passward="uhvuh"){
        cout<<"succesfull login!"<<endl;
        atmTranscation();
    }
    else{
        cout<<"errro";  
    }
}
void atmTranscation(){
    int totalmoney=100;
}
