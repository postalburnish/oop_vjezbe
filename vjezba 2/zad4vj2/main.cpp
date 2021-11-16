#include <iostream>
using namespace std;
struct Vector
{
    int*arr;
    size_t siz;
    size_t cap;

    void vector_new(size_t sz)
    {
        arr=new int[sz];
        siz = 0;
        cap = 1;
    }
    void vector_pushback(int n)
    {
        if (siz==cap)
        {
            cap*=2;
            int*arr2=new int[cap];
            for(int i=0; i<siz; i++)
            {
                arr2[i]=arr[i];
            }
            delete[]arr;
            arr=arr2;
        }

        arr[siz]=n;
        siz++;
    }

    void vector_popback()
    {
        siz--;
    }
    int vector_front()
    {
       return arr[0];
    }
    int vector_back()
    {
        return arr[siz-1];
    }
    int vector_size()
    {
        return siz;
    }
    void vector_delete()
    {
        delete[]arr;
    }
    void print_vector()
    {
        for (size_t i = 0; i < vector_size(); ++i)
        cout << arr[i] << " ";
        cout << endl;
    }

};

int main()
{
    Vector v1;
    int n;
    v1.vector_new(3);

    cout << "Enter element,ctl+z to stop inputting " << endl;
    while (cin >> n) {
        v1.vector_pushback(n);
    }

    cout << "first element " << v1.vector_front() << endl;
    cout << "last element " << v1.vector_back() << endl;
    v1.print_vector();

    cout << "removing last element" << endl;
    v1.vector_popback();
    v1.print_vector();

    cout << "size " << v1.vector_size() << endl;
    cout << "capacity is " << v1.cap << endl;


    v1.vector_delete();
    return 0;
}
