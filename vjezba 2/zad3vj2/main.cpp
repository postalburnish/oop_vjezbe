#include <iostream>
using namespace std;
struct Circle
{
    int radius=1;
    int centerx=4;
    int centery=4;
};

struct Rectangle
{
    int pos1x;
    int pos2x;
    int pos1y;
    int pos2y;

    void imput()
    {
        cin >> pos1x;
        cin >> pos1y;
        cin >> pos2x;
        cin >> pos2y;
    }
};

int overlaps(const struct Rectangle rect[],const struct Circle*circ)
{
    int cnt=0;
    for(int i=0; i<3; i++)
    {
        int Xn = max(rect[i].pos1x, min(circ->centerx,rect[i].pos2x));
        int Yn = max(rect[i].pos1y, min(circ->centery,rect[i].pos2y));
        int Dx = Xn - circ->centerx;
        int Dy = Yn - circ->centery;
        if((Dx * Dx + Dy * Dy) <= circ->radius*circ->radius)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int c;
    Circle circ;

    Rectangle rect[3];
    for(int i=0; i<3; i++)
    {
        rect[i].imput();
    }
    c=overlaps(rect,&circ);
    cout << c << endl;

    return 0;
}
