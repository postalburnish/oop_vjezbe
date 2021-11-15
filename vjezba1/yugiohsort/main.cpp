#include <iostream>
#include <string>

using namespace std;
struct Cards{
    string type;
    string name;
    int atk;
    int def;

void entercard(){
    cout<<"what name is the card"<<endl;
    cin>>name;
    cout<<"what type the card"<<endl;
    cin>>type;
    if(type=="Monster"){
    cin>>atk;
    cin>>def;}
}
void printcard(){
    cout <<type<<endl;
    cout <<name<<endl;
    if(type=="Monster"){
    cout <<atk<<endl;
    cout <<def<<endl;}
}

};



int main(){

Cards card1,card2;
card1.entercard();
card1.printcard();
card2.entercard();
card2.printcard();


    return 0;
}





