#include <iostream>

using namespace std;

int &incrementer(int *ar,int i){
    int &refe=ar[i];
    return refe;
}

int main(){
    int i,c;
    int ar[]={3,4,2,4,5,2,3};
    cin >> i;
    c=incrementer(ar,i)+1;
    c=incrementer(ar,i)+1;
    cout << c << endl;
    return 0;
}
