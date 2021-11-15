#include <iostream>
using namespace std;
int sortem(int arr[],int i,int len,int&mini,int&maxi){
    mini=arr[0];
    maxi=arr[0];

    for(i=0;i<len;i++){
        if(arr[i]<=mini)
            mini=arr[i];
        else if(arr[i]>=maxi)
            maxi=arr[i];
    }
}
int main() {
    int i,len,mini,maxi;
    int &c=mini;
    int &d=maxi;
    cin>>len;
    int arr[len];
    for(i=0;i<len;i++){
        cin>>arr[i];
    }
    sortem(arr,i,len,c,d);
    cout << c << endl << d;
    return 0;
}
