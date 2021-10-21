#include <iostream>
using namespace std;
int sortem(int niz[],int a,int b,int&mini,int&maxi){
    mini=niz[0];
    maxi=niz[0];
    for(a=0;a<b;a++){
        if(niz[a]<=mini)
            mini=niz[a];
        else if(niz[a]>=maxi)
            maxi=niz[a];
    }
}
int main() {
    int a,b,mini,maxi;
    int &c=mini;
    int &d=maxi;
    cin>>b;
    int niz[b];
    for(a=0;a<b;a++){
        cin>>niz[a];
    }
    sortem(niz,a,b,c,d);
    cout << c <<endl<< d;
    return 0;
}
