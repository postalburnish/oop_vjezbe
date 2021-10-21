#include <iostream>
using namespace std;
int rekur(int*niz,int b,int*mini,int*maxi){
    if(b < 0){
        return 0;
    }
    if (niz[b]<=*mini){
        *mini=niz[b];}
    else if(niz[b]>=*maxi){
        *maxi=niz[b];}
    return rekur(niz,b-1,mini,maxi);
}
int main() {
    int a,b,c,d;
    cin>>b;
    int niz[b];
    for(a=0;a<b;a++){
        cin>>niz[a];
    }
    c=niz[0];
    d=niz[0];
    rekur(niz,b,&c,&d);
    cout<< c << endl <<d;
    return 0;
}
