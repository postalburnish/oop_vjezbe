#include <iostream>
#include <vector>
using namespace std;

void vectinput(vector<int>& v, int n) {
    int value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    for (int i = 0; i < n; i++) {
        cout << v.at(i) << endl;
    }
}

void vectborder(vector<int>& v, int bottom, int top) {
    int value = bottom, cnt = 0;

    while (value >= bottom && value <= top) {
        cin >> value;
        v.push_back(value);
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        cout << v.at(i) << endl;
    }


}
int main()
{
    vector<int> v;
    int n, bottom, top;
    cin >> bottom;
    cin >> top;
    vectborder(v, bottom, top);

    return 0;
}
