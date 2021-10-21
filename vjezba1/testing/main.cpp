#include <iostream>
using namespace std;
int tulip(int bobo[],int a,int b,int*mini,int*maxi){
    *mini=bobo[0];
    *maxi=bobo[0];
    for(a=0;a<=b;a++){
        if (bobo[a]<=*mini)
        *mini=bobo[a];
        else if (bobo[a]>=*maxi)
        *maxi=bobo[a];
    }
    return 0;
}
int main() {
    int a,b,c,d;
    cin>>b;
    int bobo[b];
    for(a=0;a<=b;a++){
        cin>>bobo[a];
    }
    tulip(bobo,a,b,&c,&d);
    cout<< c <<endl<< d;
    return 0;
}
