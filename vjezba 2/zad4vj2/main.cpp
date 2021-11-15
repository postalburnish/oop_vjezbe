#include <iostream>
using namespace std;
struct Vector
{
    int *arr;
    int siz;
    int cap;

    void vector_new()
    {
        int*arr=new int[cap];
    }
    void vector_delete()
    {
        delete arr;
    }
    void vector_pushback()
    {
        if (siz==cap)
        {
            cap*=2;
            int*arr2=new int[cap];
            for(int i=0; i<siz; i++)
            {
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        cin>>arr[siz];
        siz+=1;
    }

    void vector_popback()
    {
        siz-=1;

    }
    int vector_front()
    {
        cout << arr[0];
    }
    int vector_back()
    {
        cout<<arr[siz]<<endl;
    }
    int vector_size()
    {
        cout<<siz<<endl;
    }

};

int main()
{
    Vector v1;
    v1.siz=0;
    v1.cap=1;
    v1.vector_new();
    v1.vector_pushback();
    v1.vector_pushback();
    v1.vector_front();
    v1.vector_size();
    return 0;
}
