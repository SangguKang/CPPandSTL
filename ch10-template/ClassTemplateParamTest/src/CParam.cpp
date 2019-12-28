#include "CParam.h"

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


