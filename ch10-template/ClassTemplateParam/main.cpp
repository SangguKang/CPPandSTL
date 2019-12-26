#include <iostream>

using namespace std;

template <class T, int i>
class CParam
{
    public:
        CParam();
        virtual ~CParam();
        int set(T a, int b);
        T get(int a) const;

    protected:

    private:
        T TArray[i];
        int size;
};

template <class T, int i>
CParam<T, i>::CParam()
{
    //ctor
}

template <class T, int i>
CParam<T, i>::~CParam()
{
    //dtor
}

template <class T, int i>
int CParam<T, i>::set(T a, int b)
{
    if((b >= 0) && (b < i))
    {
        TArray[b] = a;
        return sizeof(a);
    }
    else
    {
        return -1;
    }
}

template <class T, int i>
T CParam<T, i>::get(int a) const
{
    return TArray[a];
}

int main()
{
    int i;
    CParam<int, 10> pi;
    for(i=0; i<10; i++)
        pi.set(i, i);
    for(i=0; i<10; i++)
        cout << pi.get(i) << " ";
    cout << endl;

    return 0;
}
